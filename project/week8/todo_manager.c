#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; //할일 목록을 받기 위한 배열
	int taskCount = 0; //할일의 수 선언 초기화

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 변수
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1: //1선택시
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); //tasks배열에 할일 저장
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++; //1 선택할때마다 배열index 증가
			break;
		case 2:
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) { //할일 번호 잘못 입력시 실행
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);
				// 배열간 대입 (=배열에 문자 배열인 문자열의 대입) 이 불가능하기 때문에
				// 문자열 복사 함수로 삭제
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		case 3: //tasks 배열값들을 보여줌
			printf("할 일 목록\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4: //4 선택시 terminate 변수를 1로 저장 -> 종료
			terminate = 1;
			break;
		case 5: //할일 수정
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &changeIndex); //수정할 index 입력받음
			if (changeIndex > taskCount || changeIndex <= 0) { //잘못된 번호 입력 시 실행
				printf("수정 범위가 벗어났습니다.\n");
			}
			else { //할일을 수정하기 위해 기존 배열에 있던 내용 strcpy_s를 이용하여 삭제
				printf("%d. %s : 할 일을 수정합니다.\n", changeIndex, tasks[changeIndex - 1]);
				strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), "");
				printf("수정할 내용을 입력하세요\n"); //scanf_s를 이용해서 삭제했던 배열에 다시 내용 넣어줌
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				printf("%d번 할 일이 %s 으로 수정되었습니다.\n", changeIndex, tasks[changeIndex - 1]);
				
				break;
			}
		default: //잘못된 번호 입력시 실행
			printf("잘못된 범위입니다");
			break;
		}


		if (terminate == 1) { //종료 코드 case 4 선택시 종료됨
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}

		// TODO: 할 일이 다 찼는지 체크하는 코드 작성
		if (taskCount >= 10)
		{
			printf("할 일이 다 찼습니다");
			break;
		}
	}
}