#include <stdio.h>

float centi_to_meter(int cm); /*�Ҽ� float ������ ���ͷ� �ٲپ� ��*/

int main(void)
{
	float res;

	res = centi_to_meter (187);
	printf("%.2lfm\n", res);

	return 0;
}
float centi_to_meter(int cm)
{
	float meter;
	meter = cm / 100.0;
	return meter;
}