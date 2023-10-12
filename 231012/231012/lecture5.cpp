#include<stdio.h>
void sort(int arr[], int size);
void swap(int* pa, int* pb);

int main()
{
	int arr[] = { 5,8,7,1,2 };
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		printf("%d \t", arr[i]);
	}
	printf("\n");

	sort(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d \t", arr[i]);
	}
	return 0;
}

void sort(int arr[], int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void swap(int* pa, int* pb) {
	int p;
	p = *pa;
	*pa = *pb;
	*pb = p;
}