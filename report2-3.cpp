#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int door;      /* 문 상태(0 = 닫힘, 1 = 열림) */
    float temp;    /* 온도(°C) */
    int time;      /* 시간(초) */

    printf("문 상태를 입력하세요 (0=닫힘, 1=열림): ");
    scanf_s("%d", &door);

    printf("현재 온도(°C): ");
    scanf_s("%f", &temp);

    printf("경과 시간(초): ");
    scanf_s("%d", &time);

    /* 잘못된 입력 처리 */
    if (door < 0 || door > 1 || time < 0 || temp < -50 || temp > 100) {
        printf("invalid input\n");
        return 0;
    }

    /* 문이 닫혀 있는 경우 */
    if (door == 0) {
        if (temp >= 2.0 && temp <= 8.0)
            printf("Normal\n");
        else if (time <= 30)
            printf("Warning\n");
        else
            printf("Critical\n");
    }
    /* 문이 열려 있는 경우 */
    else {
        (time >= 60 && (temp >= 8.0 || temp <= 2.0))
            ? printf("Critical\n")
            : printf("Warning\n");
    }

    return 0;
}
