/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,n1,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==n1){
        printf("Palindrome number");
    }
    else{
        printf("Not Palindrome number");
    }
}