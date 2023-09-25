#include <stdio.h>

int main() {
	int i = 0;
	while (i<10) {
		if (i % 2 == 0) {
			i++;
			continue;
			// continue문을 써서 조건에 맞으면 계속 실행되도록 설정
		}
		printf("%d Hello World!\n", i);
		i++;
		//홀수에도 ++를 해줘야 돼서 들어가야함
	}
	return 0;
}