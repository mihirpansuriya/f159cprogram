#include<stdio.h>
#include<conio.h>
void main()
{
int p,t,r,si;
clrscr();
	printf("enter any number");
	scanf("%d %d %d",&p,&t,&r);
	si=p*t*r/100;
	printf("you have entered number is (%d*%d*%d)/100=%d\n",p,t,r,si);
getch();
}