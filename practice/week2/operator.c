#include <stdio.h>
int main()
{
	int x = +4;
	int y = -2;
	// ������ ���� x�� y�� �����ϰ� ���� ��������

	printf("x+(-y)=%d\n", x + (-y));
	printf("-x+(+y)=%d\n", -x + (+y));
	// x�� y�� �̿��� ������ ���� ����Ʈ ��

	return 0;
}