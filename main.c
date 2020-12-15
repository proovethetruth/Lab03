
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void sorter(int *arr, int j) // we don't need to copy the whole array, better use pointers
{
    int c, i = 0;

    while (i != j)
    {
        if (arr[i] % 2 != 0) // if (odd)
        {
            if (arr[j] % 2 == 0) // if (even)
            {
                c = arr[i];         // swapping
                arr[i] = arr[j];
                arr[j] = c;

                if (i != j - 1)
                    i++, j--;
                else
                    break; // if current - even, next - odd, at this point task is completed
            }
            else
                j--;
        }
        else
        {
            if (arr[j] % 2 == 0) // if arr[j] is even - let it be
                i++;
            else
                i++, j--; // if arr[j] is odd - skip it
        }
    }
}

int main() {

    int size = 0; // size of array

    printf("\n Enter array length: ");
    if (scanf("%d", &size) != 1 || size > 100 || size < 0 || size % 1 != 0) // validation
    {
        printf("\n Input error, try again, using integer number.\n ");
        return 0;
    }

    size -= 1;
    int arr[100], j = 0; // j - iteration counter

    for (; j != size + 1; j++)
    {
        printf(" Enter array element number %d: ", j + 1);
        if (scanf("%d", &arr[j]) != 1 || arr[j] < 0 || arr[j] % 1 != 0) // validation
        {
            printf("\n Input error, try again, using integer number.\n ");
            return 0;
        }
    }

    sorter(&arr, size);

    printf("\n Result: ");
    for (int q = 0; q != size + 1; q++)
    {
        printf("%d ", arr[q]);
    }
    return 0;
}