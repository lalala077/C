#include "stdafx.h"


void CoinReverse()
{
	srand((unsigned int)time(NULL));

	int up = 0; // �ո��� ���� ��
	int count = 0; // ������ ������ Ƚ��

	printf("������ ������ Ƚ���� ���ϼ��� : ");
	scanf_s("%d", &count); // count���� �Է��Ѵ�

	for (int i = 0; i < count; i++)
	{
		if (rand() % 2 == 1) // ���� �������� 2�� ���� �������� 1�̶�� up�� 1�� ���Ѵ�
		{
			up++;
		}
	}

	printf("�ո� : %d\n", up); // �ո��� ���� Ƚ���� ����Ѵ�
	printf("�޸� : %d\n", count - up); // count - up ���� �޸��� ���� Ƚ���� ����Ѵ�
}