#include <stdio.h>

int hapf(int value); //함수 원형 선언

int main()
{
	printf("1부터   10까지의 합은 %d\n", hapf(10));
	printf("1부터  100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));

	return 0;
}

int hapf(int value) //함수 정의
{
	int i;
	int hap = 0;
	i = 1;
	while (i <= value) //i가 vlaue값보다 작거나 같을때까지 while문 실행
	{
		hap = hap + i; //hap에 i를 계속 더함
		i++; //i값 증가
	}
	return hap; //hap 결과 리턴
}