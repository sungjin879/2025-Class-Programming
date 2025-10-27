#include <stdio.h>

float centi_to_meter(int cm); /*소수 float 단위의 미터로 바꾸어 줌*/

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