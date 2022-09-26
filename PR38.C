#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("entrer month name");
	scanf("%c",&a);
	printf("you have entered charecter is %c\t",a);
	switch(a)
	{
	case 'j':
	printf("january\n");break;
	case 'f':
	printf("february\n");break;
	case 'm':
	printf("march\n");break;
	case 'a':
	printf("april\n");break;
	case 'b':
	printf("me\n"); break;
	case 'i':
	printf("june\n");break;
	case 'w':
	printf("july\n"); break;
	case 'x':
	printf("august\n");break;
	case 's':
	printf("september\n");break;
	case 'o':
	printf("october\n");break;
	case 'n':
	printf("november\n");break;
	case 'd':
	printf("december\n");break;
	default:
	printf("no match\n");break;
	}


getch();
}