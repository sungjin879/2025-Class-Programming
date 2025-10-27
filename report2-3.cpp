#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int door;      /* �� ����(0 = ����, 1 = ����) */
    float temp;    /* �µ�(��C) */
    int time;      /* �ð�(��) */

    printf("�� ���¸� �Է��ϼ��� (0=����, 1=����): ");
    scanf_s("%d", &door);

    printf("���� �µ�(��C): ");
    scanf_s("%f", &temp);

    printf("��� �ð�(��): ");
    scanf_s("%d", &time);

    /* �߸��� �Է� ó�� */
    if (door < 0 || door > 1 || time < 0 || temp < -50 || temp > 100) {
        printf("invalid input\n");
        return 0;
    }

    /* ���� ���� �ִ� ��� */
    if (door == 0) {
        if (temp >= 2.0 && temp <= 8.0)
            printf("Normal\n");
        else if (time <= 30)
            printf("Warning\n");
        else
            printf("Critical\n");
    }
    /* ���� ���� �ִ� ��� */
    else {
        (time >= 60 && (temp >= 8.0 || temp <= 2.0))
            ? printf("Critical\n")
            : printf("Warning\n");
    }

    return 0;
}
