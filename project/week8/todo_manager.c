#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; //���� ����� �ޱ� ���� �迭
	int taskCount = 0; //������ �� ���� �ʱ�ȭ

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

		int terminate = 0; // ���Ḧ ���� ����
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1: //1���ý�
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); //tasks�迭�� ���� ����
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++; //1 �����Ҷ����� �迭index ����
			break;
		case 2:
			// �� �� �����ϴ� �ڵ� ��� 
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
				taskCount -= 1;
			}
			break;
		case 3: //tasks �迭������ ������
			printf("�� �� ���\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4: //4 ���ý� terminate ������ 1�� ���� -> ����
			terminate = 1;
			break;
		case 5: //���� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &changeIndex); //������ index �Է¹���
			if (changeIndex > taskCount || changeIndex <= 0) { //�߸��� ��ȣ �Է� �� ����
				printf("���� ������ ������ϴ�.\n");
			}
			else { //������ �����ϱ� ���� ���� �迭�� �ִ� ���� strcpy_s�� �̿��Ͽ� ����
				printf("%d. %s : �� ���� �����մϴ�.\n", changeIndex, tasks[changeIndex - 1]);
				strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), "");
				printf("������ ������ �Է��ϼ���\n"); //scanf_s�� �̿��ؼ� �����ߴ� �迭�� �ٽ� ���� �־���
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				printf("%d�� �� ���� %s ���� �����Ǿ����ϴ�.\n", changeIndex, tasks[changeIndex - 1]);
				
				break;
			}
		default: //�߸��� ��ȣ �Է½� ����
			printf("�߸��� �����Դϴ�");
			break;
		}


		if (terminate == 1) { //���� �ڵ� case 4 ���ý� �����
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}

		// TODO: �� ���� �� á���� üũ�ϴ� �ڵ� �ۼ�
		if (taskCount >= 10)
		{
			printf("�� ���� �� á���ϴ�");
			break;
		}
	}
}