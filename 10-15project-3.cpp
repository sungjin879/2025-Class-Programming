#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;       // 피연산자 두 개
    char op;        // 연산자 (+, -, *, /)

    printf("사칙연산 입력(정수): ");
    scanf("%d %c %d", &a, &op, &b);  // 예: 10 - 6

    int result;     // 결과 저장 변수

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
            printf("0으로 나눌 수 없습니다.\n");
            return 0;
        }
    }
    else {
        printf("잘못된 연산자입니다.\n");
        return 0;
    }

    printf("%d%c%d=%d\n", a, op, b, result);

    return 0;
}
