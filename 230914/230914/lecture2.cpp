#include<stdio.h>

int main()
{
	char ch;
	char str[10];

	printf("문자 입력: ");
	scanf_s("%c", &ch,sizeof(ch));

	printf("문자열 입력: ");
	scanf_s("%s", str, sizeof(str));

	printf("문자 출력: %c\n", ch);
	printf("문자열 출력: %s\n", str);

	return 0;
}