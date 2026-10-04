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
    int *left = a;
    int *right = a + n - 1;
    while(left < right)
    {
        *left = *left + *right;
        *right = *left - *right;
        *left = *left - *right;

        left++;
        right--;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}