#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("¦��(%d)\n", num);
	}
	else
		printf("Ȧ��(%d)\n", num);

	return 0;
}