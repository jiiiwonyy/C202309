#include <stdio.h>

int main() {
	char name;
	int age;
	double weight;
	float height;
	char what;

	printf("�̸�?: ");
	scanf_s("%c\n", name);
	printf("����?: ");
	scanf_s("%d\n", age);
	printf("������?: ");
	scanf_s("%lf\n", weight);
	printf("Ű?: ");
	scanf_s("%f\n", height);
	printf("����?: ");
	scanf_s("%c\n", what);
	

	printf("---- ������ ���� ----");
	printf("�̸�     : %c",name);
	printf("����     : %d",age);
	printf("������   : %lf", weight);
	printf("Ű       : %f", height);
	printf("����     : %c", what);

	

}