#include<stdio.h>
int main(void)
{
	char season;
	printf("�� : A or a\n");
	printf("���� : S or s\n");
	printf("���� : D or d\n");
	printf("�ܿ� : F or f\n");

	printf("������ ������ ���ĺ� �Է� : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'a':
	case 'A':
		printf("��\n");
		printf("������ �һ��ϴ� ����\n");
		break;
	case 'S':
	case 's':
		printf("����\n");
		printf("�ÿ��� ����� ���� ����\n");
		break;
	case 'D':
	case 'd':
		printf("����\n");
		printf("��İ� ������ ǳ���� ����\n");
		break;
	case 'f':
	case 'F':
		printf("�ܿ�\n");
		printf("���Ͼ� ���� ���� ��Ű�� ����\n ");
		break;
	}


	return 0;
}