#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {  //점수에 따른 학생들의 성적을 분류하는 함수
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { //각 배열 요소들이 특정 점수를 넘기면 그에 따른 grade값 지정
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) { //특정 점수에 해당한 학생들만 출력
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS];

	//학생들의 성적 입력 받기
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	char ch = getchar();//버퍼 임시 저장 변수

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오 ");
	scanf_s("%c", &target, 1);

	//학생들의 성적 분류 및 출력
	classifyStudents(scores, target);

	return 0;
}
