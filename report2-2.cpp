#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int door;      /* 문 상태여부 */
    float temp;    /* 2.0~8.0 소수점 */
    int time;      /* 30초 ~ 60초 */

    printf("문 상태 입력 (0=닫힘, 1=열림): ");
    if (scanf("%d", &door) != 1 || (door != 0 && door != 1)) {
        printf("invalid input\n");
        return 0;
    }

    printf("현재 온도(℃): ");
    if (scanf("%f", &temp) != 1) {
        printf("invalid input\n");
        return 0;
    }

    printf("경과 시간(초): ");
    if (scanf("%d", &time) != 1 || time < 0) {
        printf("invalid input\n");
        return 0;
    }
}
