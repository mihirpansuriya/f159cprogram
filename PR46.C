#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("enter any 4 number");
	scanf("%d",&a);
	printf("entered number is %d\n",a);

	scanf("%d",&b);
	printf("entered number is %d\n",b);
	scanf("%d",&c);
	printf("entered number is %d\n",c);
	scanf("%d",&d);
	printf("entered number is %d\n",d);
	if(a>b)
	{	if(a>c)
		{
			if(a>d)
			{
			printf("a");
			}
			else
			{
			printf("d");
			}
		}
		else
		{
			if(c>d)
			{
			printf("c");
			}
			else
			{
			printf("d");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			printf("b");
			}
			else
			{
			printf("d");
			}
		}
		else
		{
			if(c>d)
			{
			printf("c");
			}
			else
			{
			printf("d");
			}
		 }
	}
getch();
}