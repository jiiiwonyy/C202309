#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϰ�? (5~100)");
	scanf_s("%d", &floor);

	int i = floor; //i����, i�� floor�� ����
	while(i>0){ //i�� 0���� Ŭ�� ����
		for (int j = 0; j < floor - i; j++) { // 0���� ����-i��ŭ S���
			printf("S");
		}
		for (int k = 0; k < i * 2 -1; k++) { //i*2-1��ŭ * ���
			printf("*");
		}
		printf("\n");
		i--; //i�� �پ�鵵�� ��
	}
	return 0;
}