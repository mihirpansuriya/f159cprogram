#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int area;
clrscr();
	printf("enter value of a and b");
	scanf("%d %d",&a,&b);
	area=0.5*a*b;
	printf("enter value of triangle is 0.5*%d*%d=%d",a,b,area);
getch();
}