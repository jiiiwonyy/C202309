#include <stdio.h>

int main() {
	int choice;

	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice); //choice�� �Է¹���

	if (choice == 1) //choice=1�� ��� ����
		printf("������ �����մϴ�.\n");
	else if (choice == 2) //choice=2�� ��� ����
		printf("���� ���� �ݱ�\n");
	else if (choice == 3) //choice=3�� ��� ����
		printf("����\n");
	else //�� ���� ��� ����
		printf("�߸� �Է��ϼ̽��ϴ�.");

	return 0;
}