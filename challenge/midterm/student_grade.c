#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

double printStudentResults(double numArray[], int length);
double printSubjectResults(double numArray[][SUBJECTS], int students, int subject);

char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
char studentNames[STUDENTS][CHARNUM] = { "" }; // 학생 이름이 저장될 배열
double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // 학생의 시험 별 성적이 점수가 저장될 배열

int main() {
	
	printf("학생 %d명의 이름의 입력을 시작합니다. \n", STUDENTS);
	// TODO 1.1: 학생 이름을 입력받는 코드 블록 작성
	for (int i = 1; i <= STUDENTS; i++) {
		printf("\t%d번째 학생의 이름을 입력하세요: ",i);
		scanf_s("%s", studentNames[i-1], (int)sizeof(studentNames[i-1]));
		char ch = getchar();
	}

	// 입력된 학생 이름이 잘 저장되었는지 확인하는 코드 블록
	printf("학생 이름이 모두 입력되었습니다. \n");
	printf("입력된 학생 이름은 다음과 같습니다. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("각 학생의 %s, %s, %s 점수를 차례대로 입력해주세요. (띄어쓰기 구분)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: 학생들의 시험 별 점수를 입력받는 코드 블록 작성
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s의 성적: ", studentNames[i]);
		for (int j = 0; j < SUBJECTS; j++) {
			scanf_s("%lf", &studentScores[i][j]);
		}
	}


	printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");
	printf("--------------------\n");
	printf("학생 별 성적은 다음과 같습니다 \n");
	
	
	double studentResult[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) { //학생 별 평균 점수를 구함
		studentResult[i] = printStudentResults(studentScores[i], SUBJECTS);
		printf("\t%s의 평균 점수: %.2lf \n", studentNames[i], studentResult[i]);
	}

	printf("--------------------\n");
	printf("과목 별 평균 점수는 아래와 같습니다. \n");

	for (int i = 0; i < SUBJECTS; i++) {
		double subjectavg = printSubjectResults(studentScores, STUDENTS, i);
		printf("\t%s의 평균 점수: %.2lf \n", subjectNames[i], subjectavg);
	}
	

	printf("프로그램을 종료합니다. ");
	return 0;
}


double printStudentResults(double numArray[], int length) { //학생 별 평균 구하는 함수
	double sum = 0.0;
	for (int i = 0; i < length; i++) {
		sum += numArray[i];
	}
	double results = sum / length;
	return results;
}

double printSubjectResults(double numArray[][SUBJECTS], int students, int subject) { //과목 별 평균을 구하는 함수
	double sum = 0.0;
	for (int i = 0; i < students; i++) {
		sum += numArray[i][subject];
	}
	double results = sum / students;
	return results;
}