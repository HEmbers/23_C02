#include <stdio.h>

int main()
{
	int num1, num2, num3, num4;

	scanf_s("%d", &num1);

	for (num2 = 1; num2 <= num1; num2++) {
		for (num3 = num2; num3 <= num1 - 1; num3++) {
			printf(" ");

		}
		for (num4 = 1; num4 <= 2 * num2 - 1; num4++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}