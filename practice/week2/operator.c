#include <stdio.h>
int main()
{
	int x = +4;
	int y = -2;
	// 정수형 변수 x와 y를 선언하고 값을 저장해줌

	printf("x+(-y)=%d\n", x + (-y));
	printf("-x+(+y)=%d\n", -x + (+y));
	// x와 y를 이용한 계산식의 값이 프린트 됨

	return 0;
}