#include <stdio.h>

int multiF(int value); //�Լ� ���� ����

void main()
{
	printf("1���� 2������ ���� %d\n",multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
}

int multiF(int value) //�Լ� ����
{
	int i;
	long mul = 1; //�� ������� ����� �� �־� long���� ����
	i = 1;
	while (i <= value) //i�� vlaue������ �۰ų� ���������� while�� ����
	{
		mul = mul * i; //mul�� i�� ���ϱ�
		i++; //i�� ����
	}
	return mul; //mul ����� ����
}