#include <stdio.h>

int main() {
	int i = 0;
	do {
		if (i % 2 == 0)
		{
			i++;
			continue;
			//continue문을 써서 조건에 맞으면 계속 실행되도록
		}

		printf("%d Hello world!\n", i);
		i++;
		// 홀수도 ++ 되도록함
	} while (i < 10);
	//i<10일때만 조건 수행

	return 0;
}