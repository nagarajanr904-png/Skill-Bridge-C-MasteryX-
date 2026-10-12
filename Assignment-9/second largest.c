/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],largest=0,second=0;
    for(int i=0;i<n;i++){
        printf("Enter th element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    if(arr[i]>largest){
        second=largest;
        largest=arr[i];
    }
    if(arr[i]>second && arr[i]!=largest){
        second=arr[i];
    }
    }
    printf("%d",second);
    return 0;
}