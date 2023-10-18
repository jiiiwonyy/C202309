#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {

	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {//cities 배열에 도시명 차례대로 입력
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {//names 배열에 여행자명 차례대로 입력
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(); //함수 호출

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE]; //travelDays배열 정의

	//각 도시에서 각 사람이 보낸 일 수 입력받기
<<<<<<< HEAD
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
=======
	for (int i=0;i<NUMCITY;i++){
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i],names[j]);
>>>>>>> ad1b923b8ed95a9d6c0abb6eeb44f66bd6bc7613
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	//각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j]; //도시별 총 일 수
		}
		float averageDays = (float)totalDays / NUMPEOPLE; //도시별 평균일
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDays, averageDays);
	}
}