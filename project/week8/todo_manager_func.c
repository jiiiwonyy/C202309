#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

void addTask(char tasks[]);
void delTask(int delIndex, int taskCount);
void printTask(int taskCount);

//�������� ����
char tasks[MAX_TASKS][CHAR_NUM] = { "" }; //���� ����� �ޱ� ���� �迭
int taskCount = 0; //������ �� ���� �ʱ�ȭ
int delIndex = -1;  // �� �� ������ ���� index ���� ����
int changeIndex = -1; // �� �� ������ ���� index ���� ����

int main() {
	int terminate = 0; // ���Ḧ ���� ����
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);


		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			taskCount++; //1 �����Ҷ����� �迭index ����
			break;
		case 2:
			delTask(delIndex, taskCount);
			taskCount -= 1;
			break;

		case 3:
			printTask(taskCount);
			printf("\n");
			break;
		case 4: //4 ���ý� terminate ������ 1�� ���� -> ����
			terminate = 1;
			break;
		default:
			printf("�߸� ���õ� �����Դϴ�");
			break;
		}

		if (terminate == 1) { //���� �ڵ� case 4 ���ý� �����
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
	}
}

void addTask(char task[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", task, (int)sizeof(task)); //tasks�迭�� ���� ����
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);
}

void delTask(int dellIndex, int taskCount) {
	printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
	scanf_s("%d", &delIndex);
	if (delIndex > taskCount || delIndex <= 0) { //���� ��ȣ �߸� �Է½� ����
		printf("���� ������ ������ϴ�.\n");
	}
	else {
		printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

		// �迭�� ���� (=�迭�� ���� �迭�� ���ڿ��� ����) �� �Ұ����ϱ� ������
		// ���ڿ� ���� �Լ��� ����
		strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

		// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
		for (int i = delIndex; i < taskCount + 1; i++) {
			strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
		}
	}
}

void printTask(int taskCount) {
	printf("�� �� ���\n");
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
}