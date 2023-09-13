#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;
	// 정수형변수 변수 x,y,z 선언
	// x,y에 값 할당

	z = x + y;
	printf("z=x+y=%d\n", z);
	z = x - y;
	printf("z=x-y=%d\n", z);
	z = x * y;
	printf("z=x*y=%d\n", z);
	z = x / y;
	printf("z=x/y=%d\n", z);
	// z에 x와 y의 사칙연산 값을 저장해줌
	// z의 사칙연산 결과가 프린트됨

}