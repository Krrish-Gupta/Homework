#include<stdio.h>
void main()
{
    int choice,r,area,perimeter,A,P,s,Area,Perimeter,l,b;
    printf("Enter 1 for area and perimeter of circle, 2 for area and perimeter of rectangle,3 for the area and perimeter of square");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf(" Enter the radius");
        scanf("%d",&r);
        area=3.14*r*r;
        perimeter=2*3.14*r;
        printf("The area of circle=%d/n",area);
        printf("The perimeter of the circle=%d",perimeter);
        break;
        case 2:
        printf("The length and breadth of rectangle");
        scanf("%d%d",&l,&b);
        Area=l*b;
        Perimeter=2*l+2*b;
        printf("The area of the rectangle=%d",Area);
        printf("The perimeter of rectangle=%d",Perimeter);
        break;
        case 3:
        printf("Enter the side of square");
        scanf("%d",&s);
        A=s*s;
        P=4*s;
        printf("The area of square=%d",A);
        printf("The perimeter of square=%d",P);
        default:
        printf("Wrong values");
    }
}