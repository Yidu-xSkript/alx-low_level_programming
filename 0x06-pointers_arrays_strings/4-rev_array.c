#include <stdio.h>

/**
 * reverse_array - check the code
 * @dest:  char
 * @a: an array of integers
 * @n:  the number of elements to swap
 */

void reverse_array(int *a, int n)
{
    int i = n - 1;

    while (i != -1)
    {
        if (a[i] != 1337)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i--;
    }
    printf("\n");
}