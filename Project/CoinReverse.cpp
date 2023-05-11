#include "stdafx.h"


void CoinReverse()
{
	srand((unsigned int)time(NULL));

	int up = 0; // 앞면이 나온 수
	int count = 0; // 동전을 뒤집을 횟수

	printf("동전을 뒤집을 횟수를 정하세요 : ");
	scanf_s("%d", &count); // count값을 입력한다

	for (int i = 0; i < count; i++)
	{
		if (rand() % 2 == 1) // 만약 랜덤값을 2로 나눈 나머지가 1이라면 up을 1씩 더한다
		{
			up++;
		}
	}

	printf("앞면 : %d\n", up); // 앞면이 나온 횟수를 출력한다
	printf("뒷면 : %d\n", count - up); // count - up 으롤 뒷면이 나온 횟수를 출력한다
}