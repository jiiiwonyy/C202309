#include <stdio.h>

int main() {
	int floor;
	printf("몇 층을 쌓겠습니가? (5~100)");
	scanf_s("%d", &floor);

	int i = floor; //i선언, i에 floor값 저장
	while(i>0){ //i가 0보다 클때 수행
		for (int j = 0; j < floor - i; j++) { // 0부터 층수-i만큼 S출력
			printf("S");
		}
		for (int k = 0; k < i * 2 -1; k++) { //i*2-1만큼 * 출력
			printf("*");
		}
		printf("\n");
		i--; //i가 줄어들도록 함
	}
	return 0;
}