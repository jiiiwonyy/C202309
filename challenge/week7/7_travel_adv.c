#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int getSum(int numArray[]);
double getAverage(int numArray[]);
void getFamousCity(double dayArray[]);

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) { //cities �迭�� ���ø� ���ʴ�� �Է�
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) { //names �迭�� �����ڸ� ���ʴ�� �Է�
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(); //�Լ�ȣ��

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//�� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) { 
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	//�� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) { 
		int totalDay = getSum(travelDays[i],NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDay,averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int length) { //�� ���� �� �� ���ϱ� �Լ�
	int totalDays = 0;
	
	for (int i = 0; i < length; i++) { 
		totalDays += numArray[i];
	}
	return totalDays;
	
}
double getAverage(int numArray[],int length) { // �� ���� �� �� ��� �Լ�
	int totalDays = 0;;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averDays = (double)totalDays / length;
	return averDays;
}

void getFamousCity(double dayArray[], int length) { //����� ���� ���� �α��־��� ���� ���ϱ� �Լ�
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) { 
		if (dayArray[i] > maxDay)
		{
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��� �ӹ���:%.2f)\n", cities[maxDayIndex], maxDay);
}
//Ŀ�Թ����� �ּ����� ���ϳ��뺯���� �ϰڽ��ϴ٤̤�...