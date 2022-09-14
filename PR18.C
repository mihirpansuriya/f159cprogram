#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,sum,sub,div,mul;
clrscr();
	printf("enter number is a");
	scanf("%f",&a);
	printf("enter number is b");
	scanf("%f",&b);
	sum=a+b;
	printf("you have entered number is%f=%f+%f\n",sum,a,b);
	printf("enter number is a");
	scanf("%f",&a);
	printf("enter number is b");
	scanf("%f",&b);
	sub=a-b;
	printf("you have entered number is %f=%f-%f\n",sub,a,b);
	printf("enter number is a");
	scanf("%f",&a);
	printf("enter number is b");
	scanf("%f",&b);
	div=a/b;
	printf("you have entered number is %f=%f/%f\n",div,a,b);
	printf("enter number is a");
	scanf("%f",&a);
	printf("enter number is b");
	scanf("%f",&b);
	mul=a*b;
	printf("you have entered number is %f=%f*%f\n",mul,a,b);
getch();
}