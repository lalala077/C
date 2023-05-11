#include "stdafx.h"


#define PI 3.141592

void factorial();
void sin();
void cos();
void tan();
void log();
void square_root();

void ScientificCalc()
{
	int menuNum; // menu를 선택할 값을 입력받을 변수를 선언한다
	bool Loop = true; // 종료를 받기 전까지 while을 무한 돌게할 bool 타입 변수이다

	while (Loop)
	{
		system("cls"); // 출력을 하기전에 지운다

		printf("무엇을 선택하겠습니까 ?\n\n"); // 계산할 수 있는 수학공식을 나열한다
		printf("1.팩토리얼\n");
		printf("2.사인\n");
		printf("3.코사인\n");
		printf("4.탄젠트\n");
		printf("5.로그\n");
		printf("6.제곱근\n");
		printf("7.종료\n");

		scanf_s("%d", &menuNum); // 값을 입력받는다
	
		switch (menuNum) // 입력받은 값에 따라 계산할 수식을 정한다
		{
			case 1:
				factorial();
				break;

			case 2:
				sin();
				break;

			case 3:
				cos();
				break;

			case 4:
				tan();
				break;

			case 5:
				log();
				break;

			case 6:
				square_root();
				break;

			case 7:
				Loop = false;
				break;
		}
	}
}

void factorial()
{
	system("cls"); // 출력하기 전에 지운다

	int num, total;

	total = 1;

	printf("값을 입력하세요 : ");
	scanf_s("%d", &num); // 팩토리얼을 계산할 값을 입력받는다
	printf("\n");

	for (int i = 1; i <= num; i++)
	{
		total = total * i; // 값을 계산한다
	}

	printf("값은 %d입니다\n", total); // 값을 출력한다
	system("pause");
}

void sin()
{
	system("cls"); // 출력하기 전에 지운다

	double num;

	printf("값을 입력하세요 : "); // sin 값을 계산할 값을 입력받는다
	scanf_s("%lf", &num);
	printf("\n");

	num = sin((PI / 180) * num); // sin값을 num에 저장한다

	printf("값은 %lf입니다\n", num); // 값을 출력한다
	system("pause");
}

void cos()
{
	system("cls"); // 출력하기 전에 지운다

	double num;

	printf("값을 입력하세요 : "); // cos 값을 계산할 값을 입력받는다
	scanf_s("%lf", &num);
	printf("\n");

	num = cos((PI / 180) * num); // cos값을 num에 저장한다

	printf("값은 %lf입니다", num); // 값을 출력한다
	system("pause");
}

void tan()
{
	system("cls"); // 출력하기 전에 지운다

	double num;

	printf("값을 입력하세요 : "); // tan 값을 계산할 값을 입력받는다
	scanf_s("%lf", &num);
	printf("\n");

	num = tan((PI / 180) * num); // tan값을 num에 저장한다

	printf("값은 %lf입니다", num); // 값을 출력한다
	system("pause");
}

void log()
{
	system("cls"); // 출력하기 전에 지운다

	double num;

	printf("값을 입력하세요 : "); // log 값을 계산할 값을 입력받는다
	scanf_s("%lf", &num);
	printf("\n");

	num = log(num); // log값을 num에 저장한다

	printf("값은 %lf입니다", num); // 값을 출력한다
	system("pause");
}

void square_root()
{
	system("cls"); // 출력하기 전에 지운다

	double num;

	printf("값을 입력하세요 : "); // 제곱근값을 계산할 값을 입력받는다
	scanf_s("%lf", &num);
	printf("\n");

	num = sqrt(num); // 제곱근값을 num에 저장한다

	printf("값은 %lf입니다", num); // 값을 출력한다
	system("pause");
}