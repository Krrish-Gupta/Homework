#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("the absolute value of n is %d",n*(-1));
    }
    else
    {
        printf("the absolute value of n is %d",n);
    }
}