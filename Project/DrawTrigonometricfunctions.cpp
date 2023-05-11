#include "stdafx.h"


#define PI 3.141592

void DrawTrigonometricfunctions()
{
	int y, degree; // y값과 degree값을 선언한다

	for (degree = 0; degree < 180; degree += 10) // 0에서부터 180까지 degree값을 10씩 더해가며 for문을 반복한다
	{
		y = (int)((sin(PI * degree / 180)) + 0.5f);

		for (int i = 0; i < y; i++)
		{
			printf("*");
		}

		printf("\n");
	}
}