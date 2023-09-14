#include<stdio.h>

int main()
{
	int val1, a, b;
	printf("a = 10 ,b = 15 \n");
	a = 10;
	b = 15;
	//val1 = ++a + b--;
	a++;
	val1 = a + b;
	b--;
	printf("val1 = ++a + b-- =%d \na = %d ,b = %d\n", val1, a, b);
	return 0;
}