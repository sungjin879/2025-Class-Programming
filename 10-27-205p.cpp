#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, number; /* i는 검사할 숫자, j는 약수 후보 , number는 입력값*/
	int concon; /*i의 약수 갯수*/

	printf("2이상의 정수를 입력: ");
	scanf_s("%d", &number);

	for (i = 2; i <= number; i++) /*2부터 입력한 숫자를 반복*/
	{
		concon = 0; /*숫자를 검사후 다시 약수 개수를 0으로 한다.*/

		for (j = 1; j <= i; j++) 
		{
			if (i % j == 0) /*나누었을 때 나눈 나머지가 0이면 약수를 하나 찾는방식*/
				concon++;
		}
		if (concon == 2)  /*concon이 2라면 i는 소수! 화면에 출력*/
			printf(" % 3d", i); /*3칸정도 띄우기*/
	}
	printf("\n");
	return 0;
}