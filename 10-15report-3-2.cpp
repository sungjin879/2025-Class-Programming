#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("��Ģ���� �Է�: ");
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
        printf("�߸��� �������Դϴ�.\n");

    }

    return 0;
}
