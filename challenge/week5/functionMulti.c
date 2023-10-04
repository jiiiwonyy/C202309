#include <stdio.h>

int multiF(int value); //함수 원형 선언

void main()
{
	printf("1부터 2까지의 곱은 %d\n",multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));
}

int multiF(int value) //함수 정의
{
	int i;
	long mul = 1; //곱 결과값이 길어질 수 있어 long으로 선언
	i = 1;
	while (i <= value) //i가 vlaue값보다 작거나 같을때까지 while문 실행
	{
		mul = mul * i; //mul에 i값 곱하기
		i++; //i값 증가
	}
	return mul; //mul 결과값 리턴
}