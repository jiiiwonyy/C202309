#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

double printStudentResults(double numArray[], int length);
double printSubjectResults(double numArray[][SUBJECTS], int students, int subject);

char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭

int main() {
	
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 1; i <= STUDENTS; i++) {
		printf("\t%d��° �л��� �̸��� �Է��ϼ���: ",i);
		scanf_s("%s", studentNames[i-1], (int)sizeof(studentNames[i-1]));
		char ch = getchar();
	}

	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s�� ����: ", studentNames[i]);
		for (int j = 0; j < SUBJECTS; j++) {
			scanf_s("%lf", &studentScores[i][j]);
		}
	}


	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");
	
	
	double studentResult[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) { //�л� �� ��� ������ ����
		studentResult[i] = printStudentResults(studentScores[i], SUBJECTS);
		printf("\t%s�� ��� ����: %.2lf \n", studentNames[i], studentResult[i]);
	}

	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

	for (int i = 0; i < SUBJECTS; i++) {
		double subjectavg = printSubjectResults(studentScores, STUDENTS, i);
		printf("\t%s�� ��� ����: %.2lf \n", subjectNames[i], subjectavg);
	}
	

	printf("���α׷��� �����մϴ�. ");
	return 0;
}


double printStudentResults(double numArray[], int length) { //�л� �� ��� ���ϴ� �Լ�
	double sum = 0.0;
	for (int i = 0; i < length; i++) {
		sum += numArray[i];
	}
	double results = sum / length;
	return results;
}

double printSubjectResults(double numArray[][SUBJECTS], int students, int subject) { //���� �� ����� ���ϴ� �Լ�
	double sum = 0.0;
	for (int i = 0; i < students; i++) {
		sum += numArray[i][subject];
	}
	double results = sum / students;
	return results;
}