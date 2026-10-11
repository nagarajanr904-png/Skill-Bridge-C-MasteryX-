/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, new_n, i;
    int *ptr, *temp;
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid size");
        return 1;
    }
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Enter the new total size: ");
    scanf("%d", &new_n);
    if (new_n < n)
    {
        printf("New size must be greater than or equal to the initial size");
        free(ptr);
        return 1;
    }
    temp = (int *)realloc(ptr, new_n * sizeof(int));
    if (temp == NULL)
    {
        printf("Memory reallocation failed");
        free(ptr);
        return 1;
    }
    ptr = temp;
    printf("Enter %d new elements:\n", new_n - n);
    for (i = n; i < new_n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i < new_n; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
