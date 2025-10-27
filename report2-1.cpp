#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int passengers;    /* 승객의 수 */
    float luggage;     /* 짐의 무게 */
    float total_weight;

    printf("승객 수 입력: ");
    if (scanf("%d", &passengers) != 1 || passengers < 1 || passengers > 3) {
        printf("invalid input\n");
        return 0; /* 강제 종료 대신 return 사용 */
    }

    printf("짐 무게(kg 단위, 없으면 0 입력): ");
    if (scanf("%f", &luggage) != 1 || luggage < 0) {
        printf("invalid input\n");
        return 0;
    }

    /* 한 사람당 평균 70kg 가정 */
    total_weight = passengers * 70 + luggage;

    /* 조건연산자 사용 */
    (total_weight <= 600) ? printf("OK\n") : printf("Overload\n");

    return 0;
}
