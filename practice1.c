#include <stdio.h>


int main()
{
    int num;

    printf("값을 입력하세요 : ");
    scanf("%d", &num);
    printf("\n");

    while (num > 0)
    {
        printf("%d", num % 2);

        num = num / 2;
    }

    //printf("%d", num);

    return 0;
}