#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;

	// x,y,z ������ ���� ����
	// x�� y�� �� ����

	z = (x + y) * (x - y);
	printf("z=(x+y)*(x-y)=%d\n", z);
	z = (x * y) + (x / y);
	printf("z=(x * y) + (x / y)=%d\n", z);
	z = x + y + 2004;
	printf("z=x + y + 2004=%d\n", z);
	// z�� x�� y�� �̿��� ���� ����
	// �� ���Ŀ� �ش��ϴ� z�� ���� ����Ʈ ��
}