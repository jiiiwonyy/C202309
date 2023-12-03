#include <stdio.h>
#include <stdlib.h>

struct Student {
	char name[50];
	int score;
};

int sumScores(struct Student* student, int studentNum);
double averageScores(struct Student* student, int studentNum);
void printRanks(struct Student* student, int studentNum);
void classifyStudents(struct Student* student, int studentNum, char targetGrade);


int main() {
	int studentNum = 0;

	printf("학생 수는 몇명인가요?\n");
	scanf_s("%d", &studentNum);

	struct Student* students = NULL;

	students = (struct Student*)malloc(studentNum * sizeof(struct Student));
	if (students == NULL) {
		return 1;
	}

	//학생들의 성적 입력 받기
	for (int i = 0; i < studentNum; i++) {
		printf("학생 %d의 이름을 입력하세요: ", i + 1);
		scanf_s("%s", students[i].name, 50);
	}

	for (int i = 0; i < studentNum; i++) {
		printf("%d 번 학생: %s\n", i+1,students[i].name);
	}
	
	printf("----------------------\n");
	
	for (int i = 0; i < studentNum; i++) {
		printf("학생 %s의 성적을 입력하세요: ", students[i].name);
		scanf_s("%d", &students[i].score);
		getchar();
	}

	printf("학생들의 성적\n------------------------\n");

	for (int i = 0; i < studentNum; i++) {
		printf("학생 %s의 성적: %d\n", students[i].name, students[i].score);
	}

	char target;
	printf("\n특정 점수 (A,B,C,D,F)를 입력하세요: ");
	scanf_s("%c", &target, 1);
	getchar();

	//학생들의 성적 분류 및 출력
	
	int sum=sumScores(students, studentNum);
	double average=averageScores(students,studentNum);

	printf("\n학생들 점수의 총 합은 %d 이고, 평균 값은 %.2lf입니다.\n", sum, average);

	printRanks(students,studentNum);
	classifyStudents(students, studentNum, target);

	free(students);

	return 0;
}

int sumScores(struct Student* student,int studentNum) //점수들 합계를 더하는 함수
{
	int sum = 0;
	for (int i = 0; i < studentNum; i++) { //배열 socres에 있는 i값들을 더한 sum을 리턴
		sum += student[i].score;
	}
	return sum;
}

double averageScores(struct Student* student, int studentNum) { //점수들의 평균을 구하는 함수
	double average = 0;
	double sum = 0;
	for (int i = 0; i < studentNum; i++) //배열 scores에 있는 i값들의 평균 average를 리턴
	{
		sum += student[i].score;
	}
	average = sum / (double)studentNum; //STUDENTS가 int값이기 때문에 double로 묶어줌
	return average;
}

void printRanks(struct Student* student, int studentNum) { //학생들의 점수 순위를 구하는 함수
	
	int* rank = (int*)malloc(studentNum * sizeof(struct Student));

	for (int i = 0; i <studentNum; i++) { //배열속 요소를 각각 비교하여 큰 경우에만 cnt를 더함
		int cnt = 1;
		for (int j = 0; j <studentNum; j++) {
			if ((student[i].score + i) < (student[i].score + j))
			{
				cnt++;
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i + 1, cnt); //배열은 0부터 시작이기 때문에 i에 1을 더해줌
	}
	printf("\n");
	free(rank);
}

void classifyStudents(struct Student* student, int studentNum, char targetGrade) {
	printf("\n학생 성적 분류:\n");
	char grade = ' ';
	int check = 0;
	for (int i = 0; i < studentNum; i++) {
		if (student[i].score >= 90) {
			grade = 'A';
		}
		else if (student[i].score >= 80) {
			grade = 'B';
		}
		else if (student[i].score >= 70) {
			grade = 'C';
		}
		else if (student[i].score >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%s 학생은 %c 점수를 받았습니다.\n", student[i].name, targetGrade);
			check = 1;
		}
	}
	if (!check) {
		printf("%c 점수를 받은 학생은 없습니다.\n", targetGrade);
	}
}