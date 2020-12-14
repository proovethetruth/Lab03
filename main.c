
// Написать функцию, которая переставляет элементы массива типа int так, что все четные значения предшествуют нечетным.

#include <stdio.h>

int is_even(int X)
{
	return (X % 2 == 0);
}

int main() {

    int arr[] = { 1, 2, 7, 8, 8, 3, 2, 0 };
    int i = 0, x = 0;
    
    while (1)
    {
        while (arr[i] != '\0')
        {
            if (is_even(arr[i]))
            {
                x = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = x;
                x++;
            }
            i++;
        }

        if (x == 0)
        {
            break;
        }

        x = 0;
    }

    i = 0;

    while (arr[i] != '\0')
    {
        printf("%d", arr[i]);
        i++;
    }
    return 0;
}