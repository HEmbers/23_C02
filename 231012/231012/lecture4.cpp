#include<stdio.h>
void swap(int *pa, int*pb);

int main()
{
	int a = 10, b=500;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d", a, b);
}

void swap(int *pa, int*pb) {
	int p;
	p = *pa;
	*pa = *pb;
	*pb = p;
}
