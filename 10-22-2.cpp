#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, x, y, Remain, Least_Common_Multiple, Greatest_Common_Divisor;
    /* remain ������, Least_Common_Multiple �ּҰ����, Greatest_Common_Divisor �ִ����� */
    printf("�� ������ �Է��ϱ�: ");
    scanf_s("%d %d", &a, &b); /* �� ���� �Է¹޾� �����ϱ�*/

    x = a;
    y = b;

    while (y != 0) { /*y�� 0�� �Ǹ� ����*/
        Remain = x % y; /*x�� y�� ���� �������� Remain�� ���� */
        x = y;
        y = Remain;
    }

    Greatest_Common_Divisor = x;
    Least_Common_Multiple = (a * b) / Greatest_Common_Divisor;

    printf("�ִ�����(Greatest_Common_Divisor): %d\n", Greatest_Common_Divisor);
    printf("�ּҰ����(Least_Common_Multiple): %d\n", Least_Common_Multiple);

    return 0;
}
