#include <stdio.h>
#define STUDENTS 5

int sumScores(int scores[]) //������ �հ踦 ���ϴ� �Լ�
{
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) { //�迭 socres�� �ִ� i������ ���� sum�� ����
		sum += scores[i];
	}
	return sum;
}
double averageScores(int scores[]) { //�������� ����� ���ϴ� �Լ�
	double average = 0;
	double sum = 0;
	for (int i = 0; i < STUDENTS; i++) //�迭 scores�� �ִ� i������ ��� average�� ����
		sum += scores[i];
	average = sum / (double)STUDENTS; //STUDENTS�� int���̱� ������ double�� ������
	return average;
}

void printRanks(int scores[]) { //�л����� ���� ������ ���ϴ� �Լ�
	int rank[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) { //�迭�� ��Ҹ� ���� ���Ͽ� ū ��쿡�� cnt�� ����
		int cnt = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j])
			{
				cnt++;
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i+1, cnt); //�迭�� 0���� �����̱� ������ i�� 1�� ������
	}
}

void classifyStudents(int scores[], char targetGrade) { //������ ���� �л����� ������ �з��ϴ� �Լ�
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { //�� �迭 ��ҵ��� Ư�� ������ �ѱ�� �׿� ���� grade�� ����
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
		if (targetGrade == grade) { //Ư�� ������ �ش��� �л��鸸 ���
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}

int main() {
	int scores[STUDENTS];

	//�л����� ���� �Է� �ޱ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	char ch = getchar();//���� �ӽ� ���� ����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ� ");
	scanf_s("%c", &target, 1);

	//�л����� ���� �з� �� ���
	classifyStudents(scores, target);
	int sum=sumScores(scores);
	double average=averageScores(scores);

	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);

	return 0;
}
