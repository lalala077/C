#include "stdafx.h"


#define PI 3.141592

void DrawTrigonometricfunctions()
{
	int y, degree; // y���� degree���� �����Ѵ�

	for (degree = 0; degree < 180; degree += 10) // 0�������� 180���� degree���� 10�� ���ذ��� for���� �ݺ��Ѵ�
	{
		y = (int)((sin(PI * degree / 180)) + 0.5f);

		for (int i = 0; i < y; i++)
		{
			printf("*");
		}

		printf("\n");
	}
}