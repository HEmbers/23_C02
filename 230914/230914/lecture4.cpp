#include<stdio.h>

int main()
{
	int year;
	scanf_s("%d", &year);
	if (year % 100 != 0 || year % 400 == 0 && year % 4 == 0) {
		printf("����");
	}
	else
		printf("���");
	
	return 0;

}