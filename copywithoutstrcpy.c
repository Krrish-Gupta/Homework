#include<stdio.h>
void main()
{
char a[100]; 
printf("Enter the string:");
scanf("%[^\n]s",a);
 int i,len=0;
 for(i=0;;i++)
 { 
    if(a[i]=='\0')
    break;
    else
    len++;
 }
 printf("Length of the string is %d\n",len);
char b[len];
for(i=0; i<len; i++)
b[i]=a[i];
printf("The copied string=%s",b);
}