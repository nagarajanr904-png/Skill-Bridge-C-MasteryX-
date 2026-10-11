/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;
    int largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
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
    largest = smallest = ptr[0];

    for (i = 1; i < n; i++)
    {
        if (ptr[i] > largest)
            largest = ptr[i];

        if (ptr[i] < smallest)
            smallest = ptr[i];
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    free(ptr);
    return 0;
}