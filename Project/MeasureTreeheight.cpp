#include "stdafx.h"


#define PI 3.141592

void MeasureTreeheight()
{
	int distance, personHeight, degree; // 나무와의 거리, 사람의 키, 각도를 저장받을 변수를 선언한다
	double radian, treeHeight; // radian과 나무의 높이를 저장받을 변수를 선언한다

	printf("나무와의 거리를 입력하세요 : "); // 나무와의 거리를 입력받는다
	scanf_s("%d", &distance);

	printf("\n사람의 키를 입력하세요 : "); // 사람의 키를 입력받는다
	scanf_s("%d", &personHeight);

	printf("\n각도를 입력하세요 : "); // 각도를 입력받는다
	scanf_s("%d", &degree);

	radian = degree * (PI / 180); // radian을 구한다

	treeHeight = tan(radian) * distance + personHeight; // 탄잰트를 통해 사람의 키만큼을 제외한 나무의 높이를 구하고 사람의 키를 더해 나무의 높이를 구한다

	printf("\n\n나무의 높이는 %lf 입니다\n", treeHeight); // 계산한 값을 출력한다
}