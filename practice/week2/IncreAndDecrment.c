#include <stdio.h>

int main()
{
	int x = 1;
	// 정수형변수 x선언 후 값 할당

	printf("x=%d\n", x++);
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);
	printf("x=%d\n", x--);
	printf("x=%d\n", x--);
	printf("x=%d\n", --x);
	// 증감연산자를 이용해서 x의 값이 출력됨

}