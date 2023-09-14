#include<stdio.h>

int main()
{
	int year,yy;
	scanf_s("%d", &year);
	yy = (year % 100 != 0) || (year % 400 == 0) && (year % 4 == 0);
	printf("%d", yy);
	return 0;

}