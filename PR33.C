#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
	printf("enter any number");
	scanf("%d",&a);
	printf("you have entered nuymber is %d\n",a);
	printf("enter any number");
	scanf("%d",&b);
	printf("you have entered number is %d\n",b);
	if(a<b)
	{
	printf("%d is minimum",a);
	}
	else
	{
	printf("%d is minimum",b);
	}
getch();
}