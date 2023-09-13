#include <stdio.h>

int main() {
	char name;
	int age;
	double weight;
	float height;
	char what;

	printf("이름?: ");
	scanf_s("%c\n", name);
	printf("나이?: ");
	scanf_s("%d\n", age);
	printf("몸무게?: ");
	scanf_s("%lf\n", weight);
	printf("키?: ");
	scanf_s("%f\n", height);
	printf("범죄?: ");
	scanf_s("%c\n", what);
	

	printf("---- 범죄자 정보 ----");
	printf("이름     : %c",name);
	printf("나이     : %d",age);
	printf("몸무게   : %lf", weight);
	printf("키       : %f", height);
	printf("범죄     : %c", what);

	

}