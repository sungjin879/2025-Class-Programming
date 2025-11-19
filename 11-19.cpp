#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	double x1, y1;
	double x2, y2;
	double slope, bias;

	double *pA = &slope;
	double* pB = &bias;

printf("Input 1st point information: \n"); /*5.7 °ú 10.5*/
scanf_s("%lf  %lf", &x1, &y1);

printf("input 2nd point information: \n"); /*-2.7 °ú 6.5*/
scanf_s("%lf  %lf", &x2, &y2);

	*pA = (y2 - y1) / (x2 - x1);
	*pB = y1 - (*pA) * x1;
	
printf("Calculated Output, line equation: \n");
printf("slope: %.4lf \n", *pA);
printf("bias: %.4lf \n", *pB);
}
