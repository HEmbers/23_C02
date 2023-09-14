#include<stdio.h>

int main()
{
	int a = 2;
	int b = 1;

	while (a <= 9) {
		if (a == 5) {
			a++;

			continue;
		}
		while (b <= 9) {
			printf(" %d * %d = %d\n",a , b, a*b);
			b++;
		}
		a++;
		b = 1;
	}
	return 0;
}