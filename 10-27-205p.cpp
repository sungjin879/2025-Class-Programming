#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, number; /* i�� �˻��� ����, j�� ��� �ĺ� , number�� �Է°�*/
	int concon; /*i�� ��� ����*/

	printf("2�̻��� ������ �Է�: ");
	scanf_s("%d", &number);

	for (i = 2; i <= number; i++) /*2���� �Է��� ���ڸ� �ݺ�*/
	{
		concon = 0; /*���ڸ� �˻��� �ٽ� ��� ������ 0���� �Ѵ�.*/

		for (j = 1; j <= i; j++) 
		{
			if (i % j == 0) /*�������� �� ���� �������� 0�̸� ����� �ϳ� ã�¹��*/
				concon++;
		}
		if (concon == 2)  /*concon�� 2��� i�� �Ҽ�! ȭ�鿡 ���*/
			printf(" % 3d", i); /*3ĭ���� ����*/
	}
	printf("\n");
	return 0;
}