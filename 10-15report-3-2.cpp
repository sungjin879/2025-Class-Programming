#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("사칙연산 입력: ");
    scanf("%d%c%d", &a, &op, &b);


    switch (op) {
    case '+':
        printf("%d%c%d=%d\n", a, op, b, a+b);
    case '-':
        printf("%d%c%d=%d\n", a, op, b, a-b);

    case '*':
        printf("%d%c%d=%d\n", a, op, b, a*b);
     
    case '/':
        printf("%d%c%d=%d\n", a, op, b, a/b);
      
    default:
        printf("잘못된 연산자입니다.\n");

    }

    return 0;
}
