#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;       // �ǿ����� �� ��
    char op;        // ������ (+, -, *, /)

    printf("��Ģ���� �Է�(����): ");
    scanf("%d %c %d", &a, &op, &b);  // ��: 10 - 6

    int result;     // ��� ���� ����

    if (op == '+') {
        result = a + b;
    }
    else if (op == '-') {
        result = a - b;
    }
    else if (op == '*') {
        result = a * b;
    }
    else if (op == '/') {
        if (b != 0)
            result = a / b;
        else {
            printf("0���� ���� �� �����ϴ�.\n");
            return 0;
        }
    }
    else {
        printf("�߸��� �������Դϴ�.\n");
        return 0;
    }

    printf("%d%c%d=%d\n", a, op, b, result);

    return 0;
}
