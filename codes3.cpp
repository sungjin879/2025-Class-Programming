#include <stdio.h> /*표준입출력*/

int main(void) {
    printf("===== 1) Arithmetic operators (+, -, *, /, %) =====\n");
    int a = 13, b = 5; 
    printf("a=%d, b=%d\n", a, b); /* 정수형 변수 a와 b를 선언한후 13과 5 저장*/
    printf("a + b = %d\n", a + b); /*13+5 =18*/
    printf("a - b = %d\n", a - b); /*13-5=8*/
    printf("a * b = %d\n", a * b); /*13*5=65*/
    printf("a / b = %d   // integer division (truncation)\n", a / b); /*13/5는 2.6이지만 소수점이 버려저서 2만 나온다.*/
    printf("a %% b = %d   // remainder\n", a % b); /*나머지 연산자 %는 13을 5로 나눈 나머지를 구한다. 나머지 3이 출력 */
    printf("(double)a / b = %.2f // floating-point division via cast\n\n", (double)a / b);/*double은 a를 실수형으로 바꿈, .2f는 소숫점 2자리 즉 2.60*/

    printf("===== 2) Increment / Decrement (prefix vs postfix) =====\n");
    int x = 10; /* 변수 x를 만듬 */
    printf("Initial x = %d\n", x); /* x에 10을 저장*/
    printf("x++ -> %d (post-increment returns old value)\n", x++); /* 후위증가 값을 먼저 사용하고 1을증가 그러면 현재값 10을 사용하고 다음줄에서 11이된다.*/
    printf("After x++: x = %d\n", x); /*11값 출력*/
    printf("++x -> %d (pre-increment returns new value)\n", ++x); /*전위증가하여 1먼저 증가 후  새값을 사용*/
    printf("After ++x: x = %d\n", x); /*출력값 12 */
    printf("x-- -> %d (post-decrement returns old value)\n", x--); /* 후위감소 먼저 값을 쓰고 그다음 1 감소 출력에서 12가 쓰이고 문장이 끝난후 x는 11이된다.*/
    printf("After x--: x = %d\n", x);/* 감소된 11을 출력*/
    printf("--x -> %d (pre-decrement returns new value)\n", --x); /*전위 감소 먼저 1감소후 새값 사용 x11 ->10출력 후 출력값 10*/
    printf("After --x: x = %d\n\n", x); /* 10을 출력*/

    printf("===== 3) Relational operators (==, !=, <, <=, >, >=) =====\n");
    int r1 = 7, r2 = 7, r3 = 9;  
    printf("r1=%d, r2=%d, r3=%d\n", r1, r2, r3); /*r1 = 7 , r2 = 7 r3 = 9 출력 */
    printf("r1 == r2 : %d\n", r1 == r2); /* 7 == 7 참 -> 1출력*/
    printf("r1 != r3 : %d\n", r1 != r3); /* 7 != 9 참 -> 1출력*/
    printf("r1 <  r3 : %d\n", r1 < r3); /* 7<9 참 -> 1출력*/
    printf("r3 <= r2 : %d\n", r3 <= r2); /* 9<= 7 거짓 -> 0출력*/
    printf("r3 >  r2 : %d\n", r3 > r2);  /* 9 > 7 참 -> 1출력*/
    printf("r1 >= r2 : %d\n\n", r1 >= r2); /*7 >= 7 참 ->1출력*/

    printf("===== 4) Logical operators (&&, ||, !) and short-circuit =====\n");
    int L, R, res; /*변수선언*/

    // Case A: && short-circuits when left side is 0 (false)
    L = 0; R = 0;
    res = (L++ && R++); // L becomes 1 after evaluation; R++ is NOT executed because left was false (0)
    printf("A) (L++ && R++): res=%d, L=%d, R=%d (R unchanged due to short-circuit)\n", res, L, R); /* L=1 R=0*/

    // Case B: || short-circuits when left side is non-zero (true)
    L = 1; R = 0;
    res = (L++ || R++); // L was 1 (true), so R++ is NOT executed (OR)
    printf("B) (L++ || R++): res=%d, L=%d, R=%d (R unchanged due to short-circuit)\n", res, L, R); /* L은 증가해서 2가 되고 R은 그대로 0, 거짓일때만 반환*/

    // Logical NOT
    printf("!0=%d, !5=%d, !(1&&0)=%d\n\n", !0, !5, !(1 && 0)); /*!0은 거짓의 반대이기에 참 , !5는 0 참의 반대는 거짓, */

    printf("===== 5) Conditional (ternary) operator ? : =====\n");
    int score = 73; /*점수 변수에 73을 저장*/
    const char* grade = (score >= 90) ? "A" : /*조건문 90이상이면 A*/
        (score >= 80) ? "B" : /*아니면 80이상이면 B*/
        (score >= 70) ? "C" : /*70이상이면 C*/
        (score >= 60) ? "D" : "F";/*60이상이면 D*/
    printf("score=%d -> grade=%s\n\n", score, grade); /*score =73 -> grade = C*/

    printf("===== 6) Assignment & compound assignment (+=, -=, *=, /=, %=) =====\n");
    int as = 10; /* 변수 = 10*/
    printf("Start as=%d\n", as); /*변수 as를 10으로 시작*/
    as += 5;  printf("as += 5  -> %d\n", as); /*as += 5  -> %15*/
    as -= 3;  printf("as -= 3  -> %d\n", as); /*as -= 3  -> %12*/
    as *= 4;  printf("as *= 4  -> %d\n", as);  /*12 * 4 = 48*/
    as /= 7;  printf("as /= 7  -> %d (integer division)\n", as); /*48 / 7 = 정수몫 6*/
    as %= 5;  printf("as %%= 5  -> %d\n\n", as); /*6 % 5 = 1*/

    printf("===== 7) Bitwise operators (&, |, ^, ~, <<, >>) =====\n");
    unsigned int u1 = 0x5u; // 0101b
    unsigned int u2 = 0x3u; // 0011b
    printf("u1=0x%X (%u), u2=0x%X (%u)\n", u1, u1, u2, u2);
    printf("u1 & u2 = 0x%X (%u)\n", (u1 & u2), (u1 & u2)); /* 0001 같은자리는 1*/
    printf("u1 | u2 = 0x%X (%u)\n", (u1 | u2), (u1 | u2)); /*0111 =7 1이 있는 자리는 1*/
    printf("u1 ^ u2 = 0x%X (%u)\n", (u1 ^ u2), (u1 ^ u2)); /*0110 =6 서로 다른자리 1*/
    printf("~u1     = 0x%X\n", ~u1);/* 1010=10  모든 비트 반전 */
    printf("u1 << 1 = 0x%X (%u)\n", (u1 << 1), (u1 << 1)); /*1010=10 모든비트를 왼쪽으로 민다 */
    printf("u2 >> 1 = 0x%X (%u)\n\n", (u2 >> 1), (u2 >> 1)); /*0001 =1 모든비트를 오른쪽으로 민다.*/

    printf("===== 8) Casts & precedence =====\n");
    int p = 7, q = 2; 
    printf("p=%d, q=%d\n", p, q); /* p= 7출력 , q=2출력*/
    printf("p/q = %d (int division)\n", p / q); /*정수나눗셈 7/2= 3 소수점은 버린다.*/
    printf("(double)p/q = %f (cast to double changes the result)\n", (double)p / q); /*double을 사용하여 p/q 는 실수 나눗셈 -> 7.0/2 =3.500000*/
    printf("Precedence demo: 2 + 3 * 4 = %d (multiplication before addition)\n", 2 + 3 * 4); /*2+3*4에서 2+12 -> 14*/
    printf("With parentheses: (2 + 3) * 4 = %d\n\n", (2 + 3) * 4); /*괄호를 써서 먼저 곱하는걸 표현*/

    printf("===== 9) sizeof operator =====\n"); /*각 타입의 바이트 크기를 출력*/
    printf("sizeof(char)   = %zu\n", sizeof(char)); /*char =1*/
    printf("sizeof(int)    = %zu\n", sizeof(int)); /*int =4*/
    printf("sizeof(double) = %zu\n\n", sizeof(double)); /*double=8*/

    printf("===== 10) Comma operator (,) =====\n");
    int c1 = 1, c2 = 2, c3;
    c3 = (c1 += 10, c2 *= 3, c1 + c2); // evaluated left-to-right; result is the last expression
    printf("After comma ops: c1=%d, c2=%d, c3=%d (c3 is result of last expr)\n\n", c1, c2, c3);
    /*c1 +10d을 하여 11이되고 c2는 3을 하여 6 , 11+6을 c3에 저장*/
    printf("===== 11) Mixed logical & relational (exam-style) =====\n");
    int m = 5, n = 0;
    printf("(m > 0) && (n++ > 0) : %d  (n becomes %d)\n", (m > 0) && (n++ > 0), n); /*m>0은 참 이기에 n++은 0을 쓰고 1로 증가*/
    n = 0; // reset
    printf("(m < 0) && (n++ > 0) : %d  (short-circuit: n=%d)\n", (m < 0) && (n++ > 0), n); /*m<0은 거짓 , 오른쪽 평가 안함 전체 0으로 유지*/
    n = 0; // reset
    printf("(m < 0) || (n++ > 0) : %d  (n becomes %d)\n", (m < 0) || (n++ > 0), n);  /*m<0 거짓 오른쪽 평가 n++ >0 에서 n은 나중에 1 즉 0>0은 거짓 = 전체 0 */
    n = 0; // reset
    printf("(m > 0) || (n++ > 0) : %d  (short-circuit: n=%d)\n", (m > 0) || (n++ > 0), n); /*오른쪽 평가안함 m>0참 전체 1유지*/

    return 0;
}





#include <stdio.h>

int main(void)
{
    int x = 1, y = 5, m = 8, n = 10;
    printf("%d\n", (x > y) || (m < n)); /* 1>5 거짓 , 8<10은 참 = 0||1  1출력*/
    printf("%d\n", (-x > --n) - sizeof(m)); /* -1 > 9 는 거짓 ,sizeof 는 자료형 크기를 바이트로 구하는 연산자 int =4byte 즉 4, 0-4 = -4출력*/
    printf("%d\n", (!n++ - 9)); /*n++은 9를 쓰고  끝난후 10, !9는0 즉 -9출력*/
    printf("%d\n", (3 > --y) && (m == --n)); /*y는 5에서 4로 , 3>4는 거짓  = 0  , %% 즉 왼쪽이 거짓이라 오른쪽 실행 x  --n 실행 x , n은 10, m도 8*/
    printf("%d\n", m = 2); /*2출력*/
    printf("%d\n", m++); /*이전 값출력 2 , 끝나고 2+1->3*/
    printf("%d\n", (++n) + m); /*11 + 3 = 14출력*/
    return 0;
}




#include <stdio.h>

int main(void)
{
    int x = 1, y = 5, m = 8, n = 10;

    // 1) use arithmetic 
    //    Left: 2*x + 1 > y   Right: (m % 4) < (n % 7)
    printf("%d\n", ((2 * x + 1) > y) || ((m % 4) < (n % 7))); /*(2*1+1=3) 거짓 , (0<3) 참 , 0 || 1 -> 1출력*/

    // 2) Pre-decrement, unary minus, sizeof and a ternary bonus
    printf("%d\n", (((-x) > --n) - (int)sizeof(m)) + ((y == 5) ? 1 : 0)); /* -x는 -1 이고 --n은 먼저감소하여 9 , sizeof(m) -> 4byte , 0 -4 +( y는 5맞음 )1 = -3*/

    // 3) Logical NOT with post-increment; replace (m >> 1)==4 with (m/2)==4
    printf("%d\n", (!n++ - 9) + ((m / 2) == 4));  /*위에서 n은 9이며 !9는 0이다. 즉 (0-9)=-9 이후 n은 10으로 증가, 8/2는 4이고 4==4 ->참  즉 1  출력값 = -8*/

    // 4) Short-circuit mixing; x += 2 executed only if left side is false
    printf("%d\n", ((3 > --y) && (m == --n)) || ((x += 2) && (m != 0))); /*y는 4가 되고 , 3>4는 거짓, &&는 왼쪽이 참이면 b는 실행되지 안는다. (x+=2)는 2증가하고  새로바뀐 x의 값이 리턴 (m != 0) 이아니면 참 0이면 거짓 즉 거짓||참 -> 참 */

    // 5) Assignment-expression + parity via modulo (no bit test)
    printf("%d\n", (m = 2) + ((n % 2 != 0) ? 100 : 0)); /* m->2  , 10%2=0 , 2 +0 즉 m=2*/

    // 6) Post-increment m; condition uses logical ops and modulo (no bitwise)
    printf("%d\n", (m++) + (((x % 2) && (y % 2)) ? 10 : 20)); /*옛값 2사용후 m은 3, x=3 참 , y=4는 거짓 , 참 && 거짓 -> 거짓 20 +2 =22*/

    // 7) Pre-increment n; adjust x once using += with a ternary (no comma op)
    printf("%d\n", ((++n) + m) + (x += (x < 5 ? 1 : 0))); /* ++n으로 n은 11 -> 11+3 =14 , 3<5 은 참 ->1 , x는 4 , 14 + 4 = 18 */

    return 0;
}