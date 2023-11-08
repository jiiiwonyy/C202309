#include <stdio.h>

void summation(double *a, double *b, double *result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {
	//a, b 변수 생성 및 초기화
	double a = 3, b = 5;
	double result;

	//a+b
	summation(&a, &b, &result);
	printf("%.0lf+%.0lf=%.2lf\n", a, b, result);

	//a-b
	subtraction(&a, &b, &result);
	printf("%.0lf-%.0lf=%.2lf\n", a, b, result);

	//a*b
	multification(&a, &b, &result);
	printf("%.0lf*%.0lf=%.2lf\n", a, b, result);

	// a/b
	division(&a, &b, &result);
	printf("%.0lf/%.0lf=%.2lf\n", a, b, result);

	return 0;
}

//참조에 의한 전달

//더하기 함수
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

//빼기 함수
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// 곱하기 함수
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// 나누기 함수
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
