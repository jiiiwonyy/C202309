#include <stdio.h>

void summation(double *a, double *b, double *result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {
	//a, b ���� ���� �� �ʱ�ȭ
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

//������ ���� ����

//���ϱ� �Լ�
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

//���� �Լ�
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// ���ϱ� �Լ�
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

// ������ �Լ�
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
