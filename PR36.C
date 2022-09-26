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
	if(m>h)
	{
		if(m>i)
		{
			if(m>r)
			{
			printf("%d is max",m);
			}
			else
			{
			printf("%d is max",r);
			}
		}
		else
		{
			if(h>i)
			{
				if(h>r)
				{
				printf("%d is max",h);
				}
				else
				{
				printf("%d is max",r);
				}
			}
			else
			{
				if(r>i)
				{
				printf("%d is max",r);
				}
				else
				{
				printf();
				}
			}
		}
	}
	else
	{

getch();
}
