#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i=0;
clrscr();
printf("Enter number  :");
scanf("\%d",&a);
while(a!=0)
{
a=a/10;
i++;
}
printf("%d is a sum of natural \n",i);
getch();
}
