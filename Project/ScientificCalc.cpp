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
	int menuNum; // menu�� ������ ���� �Է¹��� ������ �����Ѵ�
	bool Loop = true; // ���Ḧ �ޱ� ������ while�� ���� ������ bool Ÿ�� �����̴�

	while (Loop)
	{
		system("cls"); // ����� �ϱ����� �����

		printf("������ �����ϰڽ��ϱ� ?\n\n"); // ����� �� �ִ� ���а����� �����Ѵ�
		printf("1.���丮��\n");
		printf("2.����\n");
		printf("3.�ڻ���\n");
		printf("4.ź��Ʈ\n");
		printf("5.�α�\n");
		printf("6.������\n");
		printf("7.����\n");

		scanf_s("%d", &menuNum); // ���� �Է¹޴´�
	
		switch (menuNum) // �Է¹��� ���� ���� ����� ������ ���Ѵ�
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
	system("cls"); // ����ϱ� ���� �����

	int num, total;

	total = 1;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &num); // ���丮���� ����� ���� �Է¹޴´�
	printf("\n");

	for (int i = 1; i <= num; i++)
	{
		total = total * i; // ���� ����Ѵ�
	}

	printf("���� %d�Դϴ�\n", total); // ���� ����Ѵ�
	system("pause");
}

void sin()
{
	system("cls"); // ����ϱ� ���� �����

	double num;

	printf("���� �Է��ϼ��� : "); // sin ���� ����� ���� �Է¹޴´�
	scanf_s("%lf", &num);
	printf("\n");

	num = sin((PI / 180) * num); // sin���� num�� �����Ѵ�

	printf("���� %lf�Դϴ�\n", num); // ���� ����Ѵ�
	system("pause");
}

void cos()
{
	system("cls"); // ����ϱ� ���� �����

	double num;

	printf("���� �Է��ϼ��� : "); // cos ���� ����� ���� �Է¹޴´�
	scanf_s("%lf", &num);
	printf("\n");

	num = cos((PI / 180) * num); // cos���� num�� �����Ѵ�

	printf("���� %lf�Դϴ�", num); // ���� ����Ѵ�
	system("pause");
}

void tan()
{
	system("cls"); // ����ϱ� ���� �����

	double num;

	printf("���� �Է��ϼ��� : "); // tan ���� ����� ���� �Է¹޴´�
	scanf_s("%lf", &num);
	printf("\n");

	num = tan((PI / 180) * num); // tan���� num�� �����Ѵ�

	printf("���� %lf�Դϴ�", num); // ���� ����Ѵ�
	system("pause");
}

void log()
{
	system("cls"); // ����ϱ� ���� �����

	double num;

	printf("���� �Է��ϼ��� : "); // log ���� ����� ���� �Է¹޴´�
	scanf_s("%lf", &num);
	printf("\n");

	num = log(num); // log���� num�� �����Ѵ�

	printf("���� %lf�Դϴ�", num); // ���� ����Ѵ�
	system("pause");
}

void square_root()
{
	system("cls"); // ����ϱ� ���� �����

	double num;

	printf("���� �Է��ϼ��� : "); // �����ٰ��� ����� ���� �Է¹޴´�
	scanf_s("%lf", &num);
	printf("\n");

	num = sqrt(num); // �����ٰ��� num�� �����Ѵ�

	printf("���� %lf�Դϴ�", num); // ���� ����Ѵ�
	system("pause");
}