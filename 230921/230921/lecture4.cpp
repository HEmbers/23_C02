#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	double x = 0;
	double y = 0;
	int count = 0, circle = 0,per=0,pi=0;
	srand(time(NULL));

	while (count < 100000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if ((x * x) + (y * y) <= 1) {
			circle++;
		}
		printf("%d번 진행 원주율 %f", count, (circle / count) * 4);
		for (int a = 0; a < per; a += 5) {
		printf("■");
	}
	printf("\n");

	}

	}


	pi = 4.0 * count / circle;

	printf("%f\n", pi);
}