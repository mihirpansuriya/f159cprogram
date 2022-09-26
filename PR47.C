#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
	printf("enter any day charachter");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'm' :
	printf("monday\n");break;
	case 't':
	printf("tuesday");break;
	case 'w':
	printf("wednesday");break;
	case 'h':
	printf("thursday");break;
	case 'f':
	printf("friday");break;
	case 's':
	printf("saturday");break;
	case 'i':
	printf("sunday");break;
	}
getch();
}
