#include <stdio.h>

int main()
{
	int num;
	printf("Á¤¼ö ÀÔ·Â:");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("Â¦¼ö(%d)\n", num);
	}
	else
		printf("È¦¼ö(%d)\n", num);

	return 0;
}