#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter array element: ");
        scanf("%d", &a[i]);
    }
    int *p = a;
    int max = *p;
    int min = *p;
    for(int i = 1; i < n; i++)
    {
        p++;

        if(*p > max)
            max = *p;

        if(*p < min)
            min = *p;
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}