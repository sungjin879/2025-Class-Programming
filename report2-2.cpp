#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int door;      /* �� ���¿��� */
    float temp;    /* 2.0~8.0 �Ҽ��� */
    int time;      /* 30�� ~ 60�� */

    printf("�� ���� �Է� (0=����, 1=����): ");
    if (scanf("%d", &door) != 1 || (door != 0 && door != 1)) {
        printf("invalid input\n");
        return 0;
    }

    printf("���� �µ�(��): ");
    if (scanf("%f", &temp) != 1) {
        printf("invalid input\n");
        return 0;
    }

    printf("��� �ð�(��): ");
    if (scanf("%d", &time) != 1 || time < 0) {
        printf("invalid input\n");
        return 0;
    }
}
