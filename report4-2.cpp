#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> /*난수를 위해 사용*/
#include <time.h>  /*난수를 위해 사용 */

int main(void)
{
    srand((unsigned)time(NULL));  /*난수를 위해 사용*/

    int data[100];
    int integer[10];
    int min, max;
    int choosemin, choosemax;
    int i, count = 0;

    printf("난수 범위 입력 (예: 1 100): ");
    scanf_s("%d %d", &min, &max);

    for (i = 0; i < 100; i++) {
        data[i] = min + (rand() % (max - min + 1));
    }

    printf("추출 범위 입력 (예: 20 50): ");
    scanf_s("%d %d", &choosemin, &choosemax);

    for (i = 0; i < 100 && count < 10; i++) {
        if (data[i] >= choosemin && data[i] <= choosemax) {
            integer[count] = data[i];
            count++;
        }
    }

    while (count < 10) {
        integer[count] = 0;
        count++;
    }

    int sum = 0;
    for (i = 0; i < 10; i++) {
        sum += integer[i];
    }

    double avg = sum / 10.0;

    double var = 0;
    for (i = 0; i < 10; i++) {
        var += (integer[i] - avg) * (integer[i] - avg);
    }
    var /= 10;

    double g = var / 2.0;
    for (i = 0; i < 20; i++) {
        g = (g + var / g) / 2.0;
    }
    double sd = g;

    printf("\n추출된 10개 값: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", integer[i]);   
    }

    printf("\n합계: %d", sum);
    printf("\n평균: %.2f", avg);
    printf("\n분산: %.2f", var);
    printf("\n표준편차: %.2f\n", sd);

    return 0;
}
