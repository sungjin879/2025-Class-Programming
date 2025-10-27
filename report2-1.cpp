#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int passengers;    /* �°��� �� */
    float luggage;     /* ���� ���� */
    float total_weight;

    printf("�°� �� �Է�: ");
    if (scanf("%d", &passengers) != 1 || passengers < 1 || passengers > 3) {
        printf("invalid input\n");
        return 0; /* ���� ���� ��� return ��� */
    }

    printf("�� ����(kg ����, ������ 0 �Է�): ");
    if (scanf("%f", &luggage) != 1 || luggage < 0) {
        printf("invalid input\n");
        return 0;
    }

    /* �� ����� ��� 70kg ���� */
    total_weight = passengers * 70 + luggage;

    /* ���ǿ����� ��� */
    (total_weight <= 600) ? printf("OK\n") : printf("Overload\n");

    return 0;
}
