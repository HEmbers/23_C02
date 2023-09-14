#include<stdio.h>

int main()
{
	int jumsu;

	scanf_s("%d", &jumsu);
	if (jumsu > 100 || jumsu < 0)
		printf("잘못입력\n");
	if (jumsu >= 90)
		printf("A\n");
	else if (jumsu >= 80 && jumsu < 90)
		printf("B\n");
	else if (jumsu >= 70 && jumsu < 80)
		printf("C\n");
	else if (jumsu >= 60 && jumsu < 70)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}