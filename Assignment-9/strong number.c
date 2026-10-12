/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,fact,n1,digit,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        digit=n%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(n1==sum){
        printf("Strong number");
    }
    else{
        printf("Not Strong number");
    }
}