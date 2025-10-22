#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    int multiplication;
    int rep;

    printf("반복문을 활용하여 2~9단 구구단 출력\n");
    printf("1. 원하는 단만 출력\n");
    printf("2. 2~9단 중 원하는 단 하나만 출력\n");
    printf("번호를 선택하세요: ");
    scanf_s("%d", &number);

    if (number == 1) {
        printf("출력할 단을 입력하세요 (2~9): ");
        scanf_s("%d", &multiplication);

        for (rep = 1; rep <= 9; rep++) {
            printf("%d * %d = %d\n", multiplication, rep, multiplication * rep);
        }
    }
    else if (number == 2) {
        int choice;
        printf("원하는 단(2~9)을 입력하세요: ");
        scanf_s("%d", &choice);

        if (choice < 2 || choice > 9) {
            printf("2~9 사이의 숫자를 입력해주세요!\n");
        }
        else {
            printf("\n[%d단]\n", choice);
            for (rep = 1; rep <= 9; rep++) {
                printf("%d * %d = %d\n", choice, rep, choice * rep);
            }
        }
    }
    else {
        printf("잘못된 번호를 입력하셨습니다.\n");
    }

    return 0;
}
