#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,div,mul;
clrscr();
	printf("enter number is a");
	scanf("%d",&a);
	printf("enter number is b");
	scanf("%d",&b);
	sum=a+b;
	printf("you have entered number is %d=%d+%d\n",sum,a,b);
	printf("enter number is a");
	scanf("%d",&a);
	printf("enter number is b");
	scanf("%d",&b);
	sub=a-b;
	printf("you have entered number is %d=%d-%d\n",sub,a,b);
	printf("enter number is a");
	scanf("%d",&a);
	printf("enter number is b");
	scanf("%d",&b);
	div=a/b;
	printf("you have entered number is %d=%d/%d\n",div,a,b);
	printf("enter number is a");
	scanf("%d",&a);
	printf("enter number is b");
	scanf("%d",&b);
	mul=a*b;
	printf("you have entered number is %d=%d*%d\n",mul,a,b);

getch();
}