#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int chest;
    char size;

    printf("�����ѷ��� �Է��Ͻÿ�:");
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
    printf("���õ� ������: %c\n", size);
    return 0;
}