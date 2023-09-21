#include<stdio.h>

double sum(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
void calculator(int selection);

int main()
{
	int sel;
	printf("1.더하기 2.빼기 3.곱하기 4.나누기:");
	scanf_s("%d", &sel);
	calculator(sel);
	return 0;
}

void calculator(int selection) {
	double num1, num2;
	double result;

	printf("숫자 1을 입력하시오:");
	scanf_s("%lf", &num1);

	printf("숫자 2을 입력하시오:");
	scanf_s("%lf", &num2);

	if (selection == 1) result = sum(num1, num2);
	else if (selection == 2) result = sub(num1, num2);
	else if (selection == 3) result = mul(num1, num2);
	else if (selection == 4) result= div(num1, num2);

	printf("%lf\n", result);
	
}

double sum(double a, double b) {
	double sum;
	sum = a + b;
	return sum;
}

double sub(double a, double b) {
	double sub;
	sub = a - b;
	return sub;
}
double mul(double a, double b) {
	double mul;
	mul = a * b;
	return mul;
}
double div(double a, double b) {
	double div;
	div = a / b;
	return div;
}