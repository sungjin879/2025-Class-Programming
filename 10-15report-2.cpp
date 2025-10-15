#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int age;
    int chest;
    char size;

    printf("나이를 입력하세요: ");
    scanf_s("%d", &age);

    printf("가슴둘레를 입력하세요: ");
    scanf_s("%d", &chest);

    if (age < 20)
    {
        if (chest < 85)
            size = 'S';
        else if (chest < 95)
            size = 'M';
        else
            size = 'L';
    }
    else
    {
        if (chest < 90)
            size = 'S';
        else if (chest < 100)
            size = 'M';
        else
            size = 'L';
    }

    printf("당신의 사이즈는 %c 입니다.\n", size);
    return 0;
}
