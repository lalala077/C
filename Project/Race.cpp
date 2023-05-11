#include "stdafx.h"


#define course 10

void Race()
{
	srand((unsigned int)time(NULL));

	int carNum; // 차의 갯수
	int **track = nullptr; // 차가 경주할 트랙
	int randomNum = 0; // rand() 값을 받을 변수
	int i, j; // for문에 쓰일 i, j
	int winCar; // 우승한 차의 index값을 저장받는다
	bool IsFinish = false; // 경주가 끝났는가를 나타내는 변수
	bool IsCarMove = false; // 차가 움직였는지를 나타내는 변수

	printf("경주할 차의 갯수를 선택하세요 : "); // 경주할 차의 갯수를 정한다
	scanf_s("%d", &carNum);
	printf("\n");

	track = (int**)malloc(sizeof(int*) * carNum); // 갯수가 정해지면 차의 수만큼 malloc으로 할당받는다

	for (int i = 0; i < carNum; i++) // 차의 수 * 코스의 수만큼 malloc으로 할당받아 레이스의 형태를 다잡는다
	{
		track[i] = (int*)malloc(sizeof(int) * course);
	}

	for (int i = 0; i < carNum; i++) // track을 초기화한다
	{
		for (int j = 0; j < course; j++)
		{
			track[i][j] = 0;
		}
	}

	while (!IsFinish) // race가 끝날때까지 돈다
	{
		system("cls"); // track을 그리기전에 지운다

		randomNum = rand() % carNum;
		IsCarMove = false;

		for (i = 0; i < carNum; i++)
		{
			if (track[i][9] == 1) // 누가 완주했는지 검사한다
			{
				IsFinish = true;
				winCar = i;

				break;
			}
		}

		for (i = 0; i < carNum; i++) // track을 그린다
		{
			printf("car%d	: ", i);

			for (j = 0; j < course; j++)
			{
				if (track[i][j] == 0)
				{
					printf("□");
				}

				if (track[i][j] != 0)
				{
					printf("■");
				}

				if (track[randomNum] == track[i] && track[i][j] == 0 && IsCarMove == false)
				{
					track[i][j] = 1;
					IsCarMove = true;
				}
			}

			printf("\n");
		}
	}

	printf("\n\ncar%d 우승", winCar);

	for (int i = 0; i < carNum; i++) // 차의 수 * 코스의 수만큼 malloc으로 할당받은 값을 지운다
	{
		free(track[i]);
	}

	free(track); // 차의 수만큼 malloc으로 할당받은 값을 지운다
}