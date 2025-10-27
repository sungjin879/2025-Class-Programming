#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double diameter = 0.05 *0.05 /4;/*지름*/
	double speed; /*속도 : 사용자 입력*/
	double dencity = 998.2; /*밀도(kg/m^3)*/
	double viscosity = 0.001002; /*점도(Pa·s)*/
	double Re, q; /* 레이놀즈 수, 동압 */
	double Pi = 3.14;
	/*레이놀즈 수 = Re = (speed * dencity * diameter * Pi) / viscosity*/
	/*동압 = 1/2*밀도*(속도^2) */
	/*층류 , 천이 , 난류 = 레이놀즈 수 */

	printf("배관 내 유속을 입력하세요: ");
	scanf_s("%lf", &speed);

	Re = (speed * dencity * diameter * Pi) / viscosity; /*레이놀즈 수*/
	q = 0.5 * dencity * Pi * speed * speed; /*동압*/

	printf("\n[계산결과]\n");
	printf("레이놀즈 수 : %.2f\m", Re);
	printf("동압 : %.2f\n", q);

	/*유동 상태 판정*/
	if (Re < 2300)
		printf("유동상태: 층류\n");
	else if (Re >= 2300 && Re <= 4000)
		printf("유동상태: 천이영역\n");
	else
		printf("유동상태: 난류\n");
	return 0;
}
