#include <stdio.h>

int main() {
	int i = 0;
	while (i<10) {
		if (i % 2 == 0) {
			i++;
			continue;
			//continue���� �Ἥ ���ǿ� ������ ��� ����ǵ��� ����
		}
		printf("%d Hello World!\n", i);
		i++;
		//Ȧ������ ++�� ����� �ż� ������
	}
	return 0;
}