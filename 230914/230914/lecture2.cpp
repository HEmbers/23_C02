#include<stdio.h>

int main()
{
	char ch;
	char str[10];

	printf("���� �Է�: ");
	scanf_s("%c", &ch,sizeof(ch));

	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, sizeof(str));

	printf("���� ���: %c\n", ch);
	printf("���ڿ� ���: %s\n", str);

	return 0;
}