#include <stdio.h>

int main() {
	int num = 0;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num); //num�� �Է¹޴´�
	
	if (num == 0) { //num=0�� ��� ����
		printf("zero");
	}
	else if (num == 1) { //num=1�� ��� ����
		printf("one");
	}
	else if (num == 2) { //num=2�� ��� ����
		printf("two");
	}
	else // num�� 0,1,2�� �ƴ� ��� ����
		printf("not 0~2");

	return 0;
}