#include "stdafx.h"


void PredictTime()
{
	time_t currentTime, pastTime; // 현재 시간과 과거시간을 선언한다

	printf("정확히 10초가 지날때 아무키나 누르세요");

	pastTime = GetTickCount64(); // GetTickCount64()로 시간을 받는다

	if (getchar())
	{
		currentTime = GetTickCount64(); // 아무키나 누를경우 GetTickCount64()를 통해 currentTime에 값을 넣는다

		currentTime = currentTime - pastTime; // currentTime에 pastTime을 빼서 흐른 시간을 구한다

		printf("%d 만큼 시간이 지났습니다", (currentTime / 1000)); // 단위가 ms 이기때문에 1000으로 나눈다
	}
}