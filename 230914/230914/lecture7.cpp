#include<stdio.h>
int main(void)
{
	char season;
	printf("봄 : A or a\n");
	printf("여름 : S or s\n");
	printf("가을 : D or d\n");
	printf("겨울 : F or f\n");

	printf("계절을 선택할 알파벳 입력 : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'a':
	case 'A':
		printf("봄\n");
		printf("만물이 소생하는 계절\n");
		break;
	case 'S':
	case 's':
		printf("여름\n");
		printf("시원한 계공을 즐기는 계절\n");
		break;
	case 'D':
	case 'd':
		printf("가을\n");
		printf("곡식과 과일이 풍성한 계절\n");
		break;
	case 'f':
	case 'F':
		printf("겨울\n");
		printf("새하얀 눈이 덮인 스키의 계절\n ");
		break;
	}


	return 0;
}