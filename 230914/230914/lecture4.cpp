#include<stdio.h>

int main()
{
	int input, year;
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);
	printf("%d\n", year);

	return 0;

}