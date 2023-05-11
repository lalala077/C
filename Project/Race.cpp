#include "stdafx.h"


#define course 10

void Race()
{
	srand((unsigned int)time(NULL));

	int carNum; // ���� ����
	int **track = nullptr; // ���� ������ Ʈ��
	int randomNum = 0; // rand() ���� ���� ����
	int i, j; // for���� ���� i, j
	int winCar; // ����� ���� index���� ����޴´�
	bool IsFinish = false; // ���ְ� �����°��� ��Ÿ���� ����
	bool IsCarMove = false; // ���� ������������ ��Ÿ���� ����

	printf("������ ���� ������ �����ϼ��� : "); // ������ ���� ������ ���Ѵ�
	scanf_s("%d", &carNum);
	printf("\n");

	track = (int**)malloc(sizeof(int*) * carNum); // ������ �������� ���� ����ŭ malloc���� �Ҵ�޴´�

	for (int i = 0; i < carNum; i++) // ���� �� * �ڽ��� ����ŭ malloc���� �Ҵ�޾� ���̽��� ���¸� ����´�
	{
		track[i] = (int*)malloc(sizeof(int) * course);
	}

	for (int i = 0; i < carNum; i++) // track�� �ʱ�ȭ�Ѵ�
	{
		for (int j = 0; j < course; j++)
		{
			track[i][j] = 0;
		}
	}

	while (!IsFinish) // race�� ���������� ����
	{
		system("cls"); // track�� �׸������� �����

		randomNum = rand() % carNum;
		IsCarMove = false;

		for (i = 0; i < carNum; i++)
		{
			if (track[i][9] == 1) // ���� �����ߴ��� �˻��Ѵ�
			{
				IsFinish = true;
				winCar = i;

				break;
			}
		}

		for (i = 0; i < carNum; i++) // track�� �׸���
		{
			printf("car%d	: ", i);

			for (j = 0; j < course; j++)
			{
				if (track[i][j] == 0)
				{
					printf("��");
				}

				if (track[i][j] != 0)
				{
					printf("��");
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

	printf("\n\ncar%d ���", winCar);

	for (int i = 0; i < carNum; i++) // ���� �� * �ڽ��� ����ŭ malloc���� �Ҵ���� ���� �����
	{
		free(track[i]);
	}

	free(track); // ���� ����ŭ malloc���� �Ҵ���� ���� �����
}