#include <stdio.h>

int hapf(int value); //�Լ� ���� ����

int main()
{
	printf("1����   10������ ���� %d\n", hapf(10));
	printf("1����  100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));

	return 0;
}

int hapf(int value) //�Լ� ����
{
	int i;
	int hap = 0;
	i = 1;
	while (i <= value) //i�� vlaue������ �۰ų� ���������� while�� ����
	{
		hap = hap + i; //hap�� i�� ��� ����
		i++; //i�� ����
	}
	return hap; //hap ��� ����
}