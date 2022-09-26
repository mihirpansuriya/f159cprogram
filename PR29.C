#include<stdio.h>
#include<conio.h>
void main()
{
int bs,hra,da,ta,gs;
clrscr();
	 printf("enter the salary");
	 scanf("%d",&bs);
	 hra=(bs*10)/100;
	 printf("the value of hra is %d\n",hra);
	 da=(bs*5)/100;
	 printf("the value of da is %d\n",da);
	 ta=(bs*8)/100;
	 printf("the value of ta is %d\n",ta);
	 gs=bs+hra+da+ta;
	 printf("the value of gs is %d\n",gs);
getch();
}