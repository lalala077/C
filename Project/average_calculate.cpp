#include "stdafx.h"


void average_calulate()
{
	int inputCount, i, inputNum;
	float total;

	i = 0;
	total = 0;

	printf("몇 개의 정수를 입력하시겠습니다? : ");
	scanf_s("%d", &inputCount);

	while (i < inputCount)
	{
		printf("%d번째 정수 : ", (i + 1));
		scanf_s("%d", &inputNum);

		total = total + inputNum;

		i++;
	}

	printf("\n입력받은 값의 평균은 %f 입니다", (total / inputCount));
}