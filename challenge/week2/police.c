#include <stdio.h>

int main() {
	char name; //������ �������ش�
	int age;
	double weight;
	float height;
	char what;

	printf("�̸�?: ");
	scanf_s("%c\n", name); //�̸��� �Է¹���
	printf("����?: ");
	scanf_s("%d\n", age); //���̸� �Է¹���
	printf("������?: ");
	scanf_s("%lf\n", weight); //�����Ը� �Է¹���
	printf("Ű?: ");
	scanf_s("%f\n", height); //Ű�� �Է¹���
	printf("����?: ");
	scanf_s("%c\n", what); //���˸� �Է¹���
	

	printf("---- ������ ���� ----"); //�Է¹��� ������ ����ؼ� �����ش�
	printf("�̸�     : %c",name);
	printf("����     : %d",age);
	printf("������   : %lf", weight);
	printf("Ű       : %f", height);
	printf("����     : %c", what);

	

}