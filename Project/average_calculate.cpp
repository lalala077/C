#include "stdafx.h"


void average_calulate()
{
	int inputCount, i, inputNum;
	float total;

	i = 0;
	total = 0;

	printf("�� ���� ������ �Է��Ͻðڽ��ϴ�? : ");
	scanf_s("%d", &inputCount);

	while (i < inputCount)
	{
		printf("%d��° ���� : ", (i + 1));
		scanf_s("%d", &inputNum);

		total = total + inputNum;

		i++;
	}

	printf("\n�Է¹��� ���� ����� %f �Դϴ�", (total / inputCount));
}