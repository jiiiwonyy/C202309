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

	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) { //cities 배열에 도시명 차례대로 입력
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) { //names 배열에 여행자명 차례대로 입력
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(); //함수호출

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) { 
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	//각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) { 
		int totalDay = getSum(travelDays[i],NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDay,averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}

int getSum(int numArray[], int length) { //각 나라별 일 수 더하기 함수
	int totalDays = 0;
	
	for (int i = 0; i < length; i++) { 
		totalDays += numArray[i];
	}
	return totalDays;
	
}
double getAverage(int numArray[],int length) { // 각 나라별 일 수 평균 함수
	int totalDays = 0;;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averDays = (double)totalDays / length;
	return averDays;
}

void getFamousCity(double dayArray[], int length) { //평균일 기준 가장 인기있었던 도시 구하기 함수
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) { 
		if (dayArray[i] > maxDay)
		{
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균 머문일:%.2f)\n", cities[maxDayIndex], maxDay);
}
//커밋문제로 주석으로 파일내용변경좀 하겠습니다ㅜㅜ...