#include <stdio.h>

int main() {
	int i = 0;
	do {
		if (i % 2 == 0)
		{
			i++;
			continue;
			//continue���� �Ἥ ���ǿ� ������ ��� ����ǵ���
		}

		printf("%d Hello world!\n", i);
		i++;
		// Ȧ���� ++ �ǵ�����
	} while (i < 10);
	//i<10�϶��� ���� ����

	return 0;
}