#include "stdafx.h"


void PredictTime()
{
	time_t currentTime, pastTime; // ���� �ð��� ���Žð��� �����Ѵ�

	printf("��Ȯ�� 10�ʰ� ������ �ƹ�Ű�� ��������");

	pastTime = GetTickCount64(); // GetTickCount64()�� �ð��� �޴´�

	if (getchar())
	{
		currentTime = GetTickCount64(); // �ƹ�Ű�� ������� GetTickCount64()�� ���� currentTime�� ���� �ִ´�

		currentTime = currentTime - pastTime; // currentTime�� pastTime�� ���� �帥 �ð��� ���Ѵ�

		printf("%d ��ŭ �ð��� �������ϴ�", (currentTime / 1000)); // ������ ms �̱⶧���� 1000���� ������
	}
}