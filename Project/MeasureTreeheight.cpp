#include "stdafx.h"


#define PI 3.141592

void MeasureTreeheight()
{
	int distance, personHeight, degree; // �������� �Ÿ�, ����� Ű, ������ ������� ������ �����Ѵ�
	double radian, treeHeight; // radian�� ������ ���̸� ������� ������ �����Ѵ�

	printf("�������� �Ÿ��� �Է��ϼ��� : "); // �������� �Ÿ��� �Է¹޴´�
	scanf_s("%d", &distance);

	printf("\n����� Ű�� �Է��ϼ��� : "); // ����� Ű�� �Է¹޴´�
	scanf_s("%d", &personHeight);

	printf("\n������ �Է��ϼ��� : "); // ������ �Է¹޴´�
	scanf_s("%d", &degree);

	radian = degree * (PI / 180); // radian�� ���Ѵ�

	treeHeight = tan(radian) * distance + personHeight; // ź��Ʈ�� ���� ����� Ű��ŭ�� ������ ������ ���̸� ���ϰ� ����� Ű�� ���� ������ ���̸� ���Ѵ�

	printf("\n\n������ ���̴� %lf �Դϴ�\n", treeHeight); // ����� ���� ����Ѵ�
}