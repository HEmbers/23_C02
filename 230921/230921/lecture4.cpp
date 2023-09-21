#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void)
{
	int per = 100;
	double x = 0, y = 0, count = 0, inside = 0;
	srand(time(NULL));

	while (count < 10000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if ((x * x) + (y * y) <= 1)
			inside++;
		printf("%.2lf%%����... ������ %.7lf", count / 100, (inside / count) * 4);
		for (int a = 0; a < per; a += 5) {
			printf("��");
		}
		for (int b = 100; b >=per; b -= 5) {
			printf("��");
		}
		printf("\n");
	}
	return 0;
}