#include <stdio.h>
int main()
{
    int a, b;
    int *p = &a;
    int *q = &b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Before Swapping: %d %d\n", a, b);
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("After Swapping: %d %d", a, b);
    return 0;
}
