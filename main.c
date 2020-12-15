
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // JUST FOR SYSTEM() FUNCTION

// 2 8 5 6 4

void sorter(int *arr, int j) 
{
    int c, i = 0;

    while (i != j)
    {
        for (int R = 0; R != 5; R++)
        {
            printf("%d ", arr[R]);
        }
        printf("\n");

        if (arr[i] % 2 != 0)
        {
            if (arr[j] % 2 == 0)
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;

                if (i != j - 1)
                    i++, j--;
                else
                    break;
            }
            else
                j--;
        }
        else 
        {
            if (arr[j] % 2 == 0)
                i++;
            else
                i++, j--;
        }
    }
}

int main() {

    int size = 0; // size of array

    printf("\n Enter array length: ");
    if (scanf("%d", &size) != 1 || size > 100 || size < 0 || size % 1 != 0)
    {
        printf("\n Input error, try again, using integer number.\n ");
        return 0;
    }

    size -= 1;
    int arr[100], j = 0; // j - iteration counter

    for (; j != size + 1; j++)
    {
        printf(" Enter array element number %d: ", j + 1);
        if (scanf("%d", &arr[j]) != 1 || arr[j] < 0 || arr[j] % 1 != 0)
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