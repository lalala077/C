#include  <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int i, *result, *temp;

    printf("값을 입력하시오 : ");
    scanf("%d", &num);
    printf("\n");

    for (i = 0; num > 0; i++)
    {
        for (int j = 0; j < i; j++)
        {
            temp[j] = result[j];
            
            if (j == i - 1)
            {
                free(result);
            }
        }

        result = (int*)malloc(sizeof(int) * (i + 1));
        
        for (int j = 0; j < i; j++)
        {
            result[j] = temp[j];

            if (j == i - 1)
            {
                free(temp);
            }
        }

        result[i] = num % 2;
        
        temp = (int*)malloc(sizeof(int) * (i + 1));

        num = num / 2;
    }

    for (i; i > 0; i--)
    {
        printf("%d", result[i - 1]);
    }

    free(result);

    return 0;
}