#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    int multiplication;
    int rep;

    printf("�ݺ����� Ȱ���Ͽ� 2~9�� ������ ���\n");
    printf("1. ���ϴ� �ܸ� ���\n");
    printf("2. 2~9�� �� ���ϴ� �� �ϳ��� ���\n");
    printf("��ȣ�� �����ϼ���: ");
    scanf_s("%d", &number);

    if (number == 1) {
        printf("����� ���� �Է��ϼ��� (2~9): ");
        scanf_s("%d", &multiplication);

        for (rep = 1; rep <= 9; rep++) {
            printf("%d * %d = %d\n", multiplication, rep, multiplication * rep);
        }
    }
    else if (number == 2) {
        int choice;
        printf("���ϴ� ��(2~9)�� �Է��ϼ���: ");
        scanf_s("%d", &choice);

        if (choice < 2 || choice > 9) {
            printf("2~9 ������ ���ڸ� �Է����ּ���!\n");
        }
        else {
            printf("\n[%d��]\n", choice);
            for (rep = 1; rep <= 9; rep++) {
                printf("%d * %d = %d\n", choice, rep, choice * rep);
            }
        }
    }
    else {
        printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�.\n");
    }

    return 0;
}
