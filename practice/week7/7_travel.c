#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {//cities �迭�� ���ø� ���ʴ�� �Է�
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {//names �迭�� �����ڸ� ���ʴ�� �Է�
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(); //�Լ� ȣ��

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE]; //travelDays�迭 ����

	//�� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
<<<<<<< HEAD
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
=======
	for (int i=0;i<NUMCITY;i++){
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i],names[j]);
>>>>>>> ad1b923b8ed95a9d6c0abb6eeb44f66bd6bc7613
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	//�� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j]; //���ú� �� �� ��
		}
		float averageDays = (float)totalDays / NUMPEOPLE; //���ú� �����
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDays, averageDays);
	}
}