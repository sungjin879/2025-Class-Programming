#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)
int main(void)  /*int�� return0 ����*/
{
	int nAge = 99;
	float fHeight = 999.0f;
	double dWeight = 999.0;

	char chTemp = ' ';
	char chString[100] = " ";

	printf("Input your alphabet and word:\n");
	int nResScanf = scanf("%c%s", &chTemp, chString);
	printf("Output:%d\n", nResScanf);
	printf("(Alphabet:%c)(Word:%s)\n", chTemp, chString);

	return 0;
}
/* �ڵ��� ��ġ�� �������ֱ�!!!!*/
