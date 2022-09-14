#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b;
clrscr();
a+=5;
	 printf("after change %d\n",a);
a-=2;
	printf("after change %d\n",a);
a*=3;
	printf("after change %d\n",a);
a/=3;
	printf("after change %d\n",a);
a%=3;
	printf("after change %d\n",a);
b&=a;
	printf("after change %d\n",a);
a^=5;
	printf("after change %d\n",a);
a|=3;
       printf("after change %d \n",a);
getch();
}