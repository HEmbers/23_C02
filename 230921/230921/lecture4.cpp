#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void bar(double now, double total);

int main(void)
{
	int count = 0;
	double x = 0, y = 0, inside = 0;
	srand(time(NULL));

	while (count < 1000000000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if ((x * x) + (y * y) <= 1)
			inside++;
		if (count %10000000 == 0) {
			printf("%d%%진행... 원주율 : %lf", count /10000000, (inside / count) * 4);
			bar(count, 1000000000);
			printf("\n");
		}
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