#include <stdio.h>

int main() {
	int num = 0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num); //num을 입력받는다
	
	if (num == 0) { //num=0일 경우 실행
		printf("zero");
	}
	else if (num == 1) { //num=1인 경우 실행
		printf("one");
	}
	else if (num == 2) { //num=2인 경우 실행
		printf("two");
	}
	else // num이 0,1,2가 아닌 경우 실행
		printf("not 0~2");

	return 0;
}