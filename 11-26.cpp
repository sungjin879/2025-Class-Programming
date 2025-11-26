#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void PrintArray(double *p, int size) /*p 배열의 시작주소를 가르키는 포인터*/
{
	int i;
	for (i = 0; i < size; i++)
		printf("%.2f ", *(p + i));
	printf("\n");
}


void CalcSortArray(double* p, int size, int order)
{
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = i + 1; j < size; j++) {
			if ((order == 1 && *(p + i) > *(p + j)) || (order == -1 && *(p + i) < *(p + j))) {
				double temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}

	}
}

int main(void)
{
	double A[SIZE];
	int i;
	char sel;

	srand((unsigned int)time(NULL));

	for (i = 0; i < SIZE; i++) {
		A[i] = ((double)rand() / RAND_MAX) * 200.0 - 100.0;
	}
	printf("랜덤 배열\n");
	PrintArray(A, SIZE);

	printf("정렬 방식 선택 (A : 오름차순 / D: 내림차순): ");
	scanf_s("%c", &sel);

	if (sel == 'A' || sel == 'a')
		CalcSortArray(A, SIZE, 1);
	else
		CalcSortArray(A, SIZE, -1);

	printf("\n 정렬후 배열: \n");
	PrintArray(A, SIZE);

	return 0;

}