#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,m;
clrscr();
	scanf("%d",&m);
	do
	{
	if(a%2!=0)
	{
	printf("%d",a);
	}
	a++;
	}
	while(a<=m);
	getch();
	}



