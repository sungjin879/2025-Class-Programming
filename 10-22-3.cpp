#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, x, y, Remain, Greatest_Common_Divisor, Least_Common_Multiple;

    printf("�� ������ �Է��ϱ�: ");
    scanf_s("%d %d", &a, &b);

    x = a;
    y = b;

    do {
        Remain = x % y;
        x = y;
        y = Remain;
    } while (y != 0);

    Greatest_Common_Divisor = x;
    Least_Common_Multiple = (a * b) / Greatest_Common_Divisor;

    printf("�ִ�����(Greatest_Common_Divisor): %d\n", Greatest_Common_Divisor);
    printf("�ּҰ����(Least_Common_Multiple): %d\n", Least_Common_Multiple);

    return 0;
}
