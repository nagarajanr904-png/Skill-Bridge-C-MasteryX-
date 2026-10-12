#include <stdio.h>

int main()
{
    int limit, num, temp, digit;
    int sum, count, power, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Armstrong numbers between 1 and %d are:\n", limit);
    for (num = 1; num <= limit; num++)
    {
        temp = num;
        count = 0;
        while (temp != 0)
        {
            count++;
            temp = temp / 10;
        }
        temp = num;
        sum = 0;
        while (temp != 0)
        {
            digit = temp % 10;
            power = 1;
            for (i = 1; i <= count; i++)
            {
                power = power * digit;
            }
            sum = sum + power;
            temp = temp / 10;
        }
        if (sum == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}