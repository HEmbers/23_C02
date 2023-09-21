#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void bar(double now, double total);

int main(void)
{
	double x = 0, y = 0, count = 0, inside = 0;
	srand(time(NULL));

	while (count < 100000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if ((x * x) + (y * y) <= 1)
			inside++;
		printf("%.2lf%%진행... 원주율 %.7lf", count / 1000, (inside / count) * 4);
		bar(count, 100000);
		printf("\n");
	}
	return 0;
}

void bar(double now, double total) {
	int length = 20;
	int completed = now / total * length;
	
		for (int i = 0; i < length; i++) {
			if (i < completed)
				printf("■");
			else
				printf("□");
		}
}