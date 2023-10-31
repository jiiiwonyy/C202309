#include <stdio.h>

int main() {
	char name; //변수를 선언해준다
	int age;
	double weight;
	float height;
	char what;

	printf("이름?: ");
	scanf_s("%c\n", name); //이름을 입력받음
	printf("나이?: ");
	scanf_s("%d\n", age); //나이를 입력받음
	printf("몸무게?: ");
	scanf_s("%lf\n", weight); //몸무게를 입력받음
	printf("키?: ");
	scanf_s("%f\n", height); //키를 입력받음
	printf("범죄?: ");
	scanf_s("%c\n", what); //범죄를 입력받음
	

	printf("---- 범죄자 정보 ----"); //입력받은 정보를 출력해서 보여준다
	printf("이름     : %c",name);
	printf("나이     : %d",age);
	printf("몸무게   : %lf", weight);
	printf("키       : %f", height);
	printf("범죄     : %c", what);

	

}