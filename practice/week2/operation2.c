#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;

	// x,y,z 정수형 변수 선언
	// x와 y에 값 저장

	z = (x + y) * (x - y);
	printf("z=(x+y)*(x-y)=%d\n", z);
	z = (x * y) + (x / y);
	printf("z=(x * y) + (x / y)=%d\n", z);
	z = x + y + 2004;
	printf("z=x + y + 2004=%d\n", z);
	// z에 x와 y를 이용한 계산식 저장
	// 각 계산식에 해당하는 z의 값이 프린트 됨
}