#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100): ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++){ // �Է¹��� ������ŭ �ݺ�
		for (int j = 0; j < floor - 1 - i; j++) { // ����-1-i��ŭ s���
			printf("S");
		}
		for (int k = 0; k < i*2 + 1; k++) { //i*2+!��ŭ * ���
			printf("*");
		}
		printf("\n");
	}
	return 0;
}