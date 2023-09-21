#include<stdio.h>

int prime(int num);

int main()
{
	int num;
	scanf_s("%d", &num);
	printf("%d%n", prime(num));
	return 0;
}

int prime(int num)
{
	for (int div = num - 1; div > 1; div--) {
		if (num % div == 0)
			return 0;
	}
	return 1;
}