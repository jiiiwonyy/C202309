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

	printf("�л� ���� ����ΰ���?\n");
	scanf_s("%d", &studentNum);

	struct Student* students = NULL;

	students = (struct Student*)malloc(studentNum * sizeof(struct Student));
	if (students == NULL) {
		return 1;
	}

	//�л����� ���� �Է� �ޱ�
	for (int i = 0; i < studentNum; i++) {
		printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
		scanf_s("%s", students[i].name, 50);
	}

	for (int i = 0; i < studentNum; i++) {
		printf("%d �� �л�: %s\n", i+1,students[i].name);
	}
	
	printf("----------------------\n");
	
	for (int i = 0; i < studentNum; i++) {
		printf("�л� %s�� ������ �Է��ϼ���: ", students[i].name);
		scanf_s("%d", &students[i].score);
		getchar();
	}

	printf("�л����� ����\n------------------------\n");

	for (int i = 0; i < studentNum; i++) {
		printf("�л� %s�� ����: %d\n", students[i].name, students[i].score);
	}

	char target;
	printf("\nƯ�� ���� (A,B,C,D,F)�� �Է��ϼ���: ");
	scanf_s("%c", &target, 1);
	getchar();

	//�л����� ���� �з� �� ���
	
	int sum=sumScores(students, studentNum);
	double average=averageScores(students,studentNum);

	printf("\n�л��� ������ �� ���� %d �̰�, ��� ���� %.2lf�Դϴ�.\n", sum, average);

	printRanks(students,studentNum);
	classifyStudents(students, studentNum, target);

	free(students);

	return 0;
}

int sumScores(struct Student* student,int studentNum) //������ �հ踦 ���ϴ� �Լ�
{
	int sum = 0;
	for (int i = 0; i < studentNum; i++) { //�迭 socres�� �ִ� i������ ���� sum�� ����
		sum += student[i].score;
	}
	return sum;
}

double averageScores(struct Student* student, int studentNum) { //�������� ����� ���ϴ� �Լ�
	double average = 0;
	double sum = 0;
	for (int i = 0; i < studentNum; i++) //�迭 scores�� �ִ� i������ ��� average�� ����
	{
		sum += student[i].score;
	}
	average = sum / (double)studentNum; //STUDENTS�� int���̱� ������ double�� ������
	return average;
}

void printRanks(struct Student* student, int studentNum) { //�л����� ���� ������ ���ϴ� �Լ�
	
	int* rank = (int*)malloc(studentNum * sizeof(struct Student));

	for (int i = 0; i <studentNum; i++) { //�迭�� ��Ҹ� ���� ���Ͽ� ū ��쿡�� cnt�� ����
		int cnt = 1;
		for (int j = 0; j <studentNum; j++) {
			if ((student[i].score + i) < (student[i].score + j))
			{
				cnt++;
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, cnt); //�迭�� 0���� �����̱� ������ i�� 1�� ������
	}
	printf("\n");
	free(rank);
}

void classifyStudents(struct Student* student, int studentNum, char targetGrade) {
	printf("\n�л� ���� �з�:\n");
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
			printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", student[i].name, targetGrade);
			check = 1;
		}
	}
	if (!check) {
		printf("%c ������ ���� �л��� �����ϴ�.\n", targetGrade);
	}
}