#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int chest;
	char size;

	printf("가슴둘레(cm)를 입력하세요: ");
	scanf("%d", &chest);
	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("당신의 옷 사이즈는 %c입니다.\n", size);
	return 0;
}