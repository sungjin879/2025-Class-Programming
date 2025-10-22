#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, x, y, Remain, Least_Common_Multiple, Greatest_Common_Divisor;
    /* remain 나머지, Least_Common_Multiple 최소공배수, Greatest_Common_Divisor 최대공배수 */
    printf("두 정수를 입력하기: ");
    scanf_s("%d %d", &a, &b); /* 두 정수 입력받아 저장하기*/

    x = a;
    y = b;

    while (y != 0) { /*y가 0이 되면 멈춤*/
        Remain = x % y; /*x를 y로 나눈 나머지를 Remain에 저장 */
        x = y;
        y = Remain;
    }

    Greatest_Common_Divisor = x;
    Least_Common_Multiple = (a * b) / Greatest_Common_Divisor;

    printf("최대공약수(Greatest_Common_Divisor): %d\n", Greatest_Common_Divisor);
    printf("최소공배수(Least_Common_Multiple): %d\n", Least_Common_Multiple);

    return 0;
}
