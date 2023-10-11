#include <stdio.h>
#define STUDENTS 5

int sumScores(int scores[]) //점수들 합계를 더하는 함수
{
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) { //배열 socres에 있는 i값들을 더한 sum을 리턴
		sum += scores[i];
	}
	return sum;
}
double averageScores(int scores[]) { //점수들의 평균을 구하는 함수
	double average = 0;
	double sum = 0;
	for (int i = 0; i < STUDENTS; i++) //배열 scores에 있는 i값들의 평균 average를 리턴
		sum += scores[i];
	average = sum / (double)STUDENTS; //STUDENTS가 int값이기 때문에 double로 묶어줌
	return average;
}

void printRanks(int scores[]) { //학생들의 점수 순위를 구하는 함수
	int rank[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) { //배열속 요소를 각각 비교하여 큰 경우에만 cnt를 더함
		int cnt = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j])
			{
				cnt++;
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i+1, cnt); //배열은 0부터 시작이기 때문에 i에 1을 더해줌
	}
}

void classifyStudents(int scores[], char targetGrade) { //점수에 따른 학생들의 성적을 분류하는 함수
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
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
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
	int sum=sumScores(scores);
	double average=averageScores(scores);

	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores);

	return 0;
}
