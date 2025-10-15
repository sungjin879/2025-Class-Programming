#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int chest;
    char size;

    printf("가슴둘레를 입력하시오:");
    scanf_s("%d",&chest);
        if (chest <= 90)
        {
            size = 'S';
        }
        else if (chest > 90 && chest <= 100)
        {
            size = 'M';
        }
        else
        {
            size = 'L';
        }
    printf("선택된 사이즈: %c\n", size);
    return 0;
}