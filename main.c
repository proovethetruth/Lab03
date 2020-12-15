
// Написать функцию, которая переставляет элементы массива типа int так, что все четные значения предшествуют нечетным.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // JUST FOR SYSTEM() FUNCTION

void sorter(int *arr, int j) // j - размер массива
{
    int c, i = 0; // "c" - used to swap to elements, "i" - is just a counter

    while (i != j) 
    {

        if (arr[i] % 2 != 0)
        {
            if (arr[j] % 2 == 0)
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;

                if (i + 1 != j--)
                {
                    i++, j--;
                }
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

    int size = 0, err; // size of array and error counter for scanf(%*s)

    printf("\n Enter array length: ");
    if (scanf("%d", &size) != 1 || size > 100 || size < 0)
    {
        printf("\n Input error, try again, using integer number.\n ");
        return 0;
    }

    int arr[100], j = 0; // j - iteration counter

    while (1)
    {
        printf(" Enter array element number %d: ", j + 1);
        if (scanf("%d", &arr[j]) != 1)
        {
            printf("\n Input error, try again, using integer number.\n ");
            return 0;
        }

        if (j == 100 || j == size - 1)
        {
            break;
        }
        j++;
    }

    sorter(&arr, size - 1);

    printf("\n Result: ");
    for (int q = 0; q != size; q++)
    {
        printf("%d ", arr[q]);
    }
    return 0;
}