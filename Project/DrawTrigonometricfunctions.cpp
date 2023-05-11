#include "stdafx.h"


#define PI 3.141592

void DrawTrigonometricfunctions()
{
	int y, degree;

	for (degree = 0; degree < 180; degree += 10)
	{
		y = (int)((60 * sin(PI * degree / 180)) + 0.5f);

		for (int i = 0; i < y; i++)
		{
			printf("*");
		}

		printf("\n");
	}
}