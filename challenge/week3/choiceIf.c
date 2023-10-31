#include <stdio.h>

int main() {
	int choice;

	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice); //choice를 입력받음

	if (choice == 1) //choice=1인 경우 실행
		printf("파일을 저장합니다.\n");
	else if (choice == 2) //choice=2인 경우 실행
		printf("저장 없이 닫기\n");
	else if (choice == 3) //choice=3인 경우 실행
		printf("종료\n");
	else //그 외의 경우 실행
		printf("잘못 입력하셨습니다.");

	return 0;
}