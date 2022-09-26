
#include<stdio.h>
#include<conio.h>
void main()
{
float celsius,fahrenheit;
clrscr();

	printf("enter the value of celsius is \n");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("fahrenheit is %.2f ",fahrenheit);
getch();
}