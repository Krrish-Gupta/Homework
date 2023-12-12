#include<stdio.h>
void main()
{
    int marks=0;
    printf("Enter the marks");
    scanf("%d",&marks);
    char b;
    printf("Enter the handwriting is good or bad");
    scanf("%c%c",&b,&b);
    if(b=='y')
    {
     marks=marks+10;
    }
    else
    {
     marks=marks-10;
    }
    printf("Your marks is =%d",marks);
}
