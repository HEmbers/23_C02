#include<stdio.h>

int main()
{
	int count, hap=0;
	for (count = 1; count <= 10; count +=2) 
	{
			hap += count;
			printf("%02dȸ���� ���� Ȧ���� %d\n", count, hap);
	}
	printf("1+3+5+7+9=$d", hap);
	return 0;
}