#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {  //������ ���� �л����� ������ �з��ϴ� �Լ�
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
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

	return 0;
}
