#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int chest;
	char size;

	printf("�����ѷ�(cm)�� �Է��ϼ���: ");
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
	printf("����� �� ������� %c�Դϴ�.\n", size);
	return 0;
}