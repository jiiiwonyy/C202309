#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100): ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++){ // 입력받은 층수만큼 반복
		for (int j = 0; j < floor - 1 - i; j++) { // 층수-1-i만큼 s출력
			printf("S");
		}
		for (int k = 0; k < i*2 + 1; k++) { //i*2+!만큼 * 출력
			printf("*");
		}
		printf("\n");
	}
	return 0;
}