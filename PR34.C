#include<stdio.h>
#include<conio.h>
void main()
{
int m,h,i,r;
clrscr();
	printf("enter any four number:");
	scanf("%d",&m);
	printf("you have entered number is %d\n",m);
	scanf("%d",&h);
	printf("you have entered number is %d\n",h);
	scanf("%d",&i);
	printf("you have entered number is %d\n",i);
	scanf("%d",&r);
	printf("you have entered number is %d\n",r);

	if(m<h && m<i && m<r)
	{
	printf("%d is min",m);
	}
	else if(h<i && h<r)
	{
	printf("%d is min",h);
	}
	else if(i<r)
	{
	printf("%d is min",i);
	}
	else
	{
	printf("%d is min",r);
	}
getch();
}