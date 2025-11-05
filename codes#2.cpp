// for using scanf, old-type input method (scanf를 사용)
#pragma warning(disable:4996) /*scanf, gets라는 오래된 함수는 안전하지 않기에 그 경고를 꺼주는 설정문*/
#define _CRT_SECURE_NO_WARNINGS /*경고 없이 scnaf를 사용하게 함*/

#include <stdio.h> /*표준입출력 사용*/

int main(void) /*메인함수*/
{
    // initializing variables  /* 변수 초기화*/
    float fTriangleBase = 0.0f; /* 삼각형 밑변 길이*/
    float fTriangleHeight = 0.0f; /*삼각형 높이 */
    float fTriangleArea = 0.0f; /* 삼각형 넓이 */

    // getting triangle information
    printf("Area Calculation of Triangle\n"); /* 삼각형의 넓이 계산*/
    printf("Input your Triangle information(Base[m], Height[m])\n)"); /* 삼각형의  밑변과 높이를 입력*/
    int nRes = scanf("%f%f", &fTriangleBase, &fTriangleHeight); /* 실수 두개(%f)를 입력받으며 변수를 각각 입력할 장소를 가진다. nRes는 입력이 제대로 됬는지 확인*/

    // calculating area of triangle  (삼각형 넓이 공식)
    fTriangleArea = 0.5f * fTriangleBase * fTriangleHeight; /* 밑변*높이*0.5float(실수형) */

    // printing result (계산된 넓이를 출력)
    printf("Result(Area): %.4f[m^2]\n", fTriangleArea); /* 소숫점 아래 4자리까지 표시 ,m^2(제곱미터) */

    return 0;
}




// for using scanf, old-type input method
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) /*프로그램 시작*/
{
    // initializing variables
    float fRectBase = 0.0f;  /*사각형 밑변 (가로) 실수형*/
    float fRectHeight = 0.0f; /*사각형 높이 (세로) 실수형*/
    float fRectArea = 0.0f;  /* 사각형 넓이 실수형*/

    // getting triangle information
    printf("Area Calculation of Rectangle\n");  /*사각형의 넓이 계산 */
    printf("Input your Rectangle information(Base[m], Height[m])\n"); /* 사각형의 밑변과 높이를 입력하기 */
    int nRes = scanf("%f%f", &fRectBase, &fRectHeight); /* 사용자에게 두개의 실수(float)을 입력받는다. */

    // calculating area of rectangle
    fRectArea = fRectBase * fRectHeight;  /* 사각형 계산 밑변*높이 */

    // printing result
    printf("Result(Area): %.4f[m^2]\n", fRectArea);  /* 결과를 소수점 4자리까지 출력한다.  예시 8.0000[m^2] */

    return 0;
}



// for using scanf, old-type input method  (scanf를 사용하기 위한 설정)
#pragma warning(disable:4996)  /*scanf 같은 함수에 안전하지 않다는 경고 4996를 끈다.*/
#define _CRT_SECURE_NO_WARNINGS  /* 보안 경고 없이 scanf사용 가능  */

#include <stdio.h> /*표준 입출력 라이브러리를 통해 printf, scanf 같은 함수들이 들어있음 */

#define PI 3.141592 /*PI는 3.141592라고 정해두기 */

int main(void)  /* 프로그램이 실제로 시작되는 부분  */
{
    // initializing variables
    float fCircleRadius = 0.0f;  /* 원의 반지름 값은 0.0 */
    float fCircleArea = 0.0f;  /* 원의 넓이 값은 0.0 */

    // getting triangle information
    printf("Area Calculation of Circle\n");   /*원의 넓이 계산*/
    printf("Input your Circle information(Radius[m])\n");  /*원의 반지름을 입력하시오 Radius[m]를 출력*/
    int nRes = scanf("%f", &fCircleRadius);   /* scanf는 입력 값을 변수 주소(&fCircleRadius)에 저장 nRes에는 1이 저장 =1개의 입력 성공 */

    // calculating
    fCircleArea = PI * fCircleRadius * fCircleRadius;  /* 넓이 = Pie * 반지름 *반지름 */

    // printing result
    printf("Result(Area): %.4f[m^2]\n", fCircleArea);  /* 계산된 넓이를 화면에 보여줌 %.4f는 소수점 아래 4자리 표시 */

    return 0;
}




// for using scanf, old-type input method
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  /* 표준 입출력 헤더 파일 */

#define PI 3.141592  /* 원주율 PI를 3.141592로 저장 */

int main(void)   /* 프로그램 시작 부분 */
{
    // initializing variables
    float fSphereRadius = 0.0f;  /* 구의 반지름  값 0.0 */
    float fSphereArea = 0.0f;  /*구의 겉넓이 값 0.0 */

    // getting triangle information
    printf("Area Calculation of Sphere\n");  /* 구의 넓이 계산 */
    printf("Input your Sphere information(Radius[m])\n");  /* 구의 반지름을 입력하세요 (단위 :미터 )
    int nRes = scanf("%f", &fSphereRadius);   /* 실수를 입력->변수를 저장->nRes는 입력성공 1 */

    // calculating
    fSphereArea = 4.0f * PI * fSphereRadius * fSphereRadius; /* (구의 겉널비 공식 : 4*3.14*반지름^2) */

    // printing result
    printf("Result(Area): %.4f[m^2]\n", fSphereArea);  /* 계산된 결과를 출력, 소수점 아래 4자리 까지 표시 ) */

    return 0;
}






// for using scanf, old-type input method
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define FT2METER    0.3048   /* FT2METER는 1ft 는 0.3048m 라는 뜻 */
#define INCH2METER  0.0254  /* INCH2METER 1in는 0.0254m 라는 뜻 */

int main(void)  /*  프로그램 시작  */
{
    // initializing variables
    float fLengthFt = 0.0f;  /* 압력을 받을 피트 단위 길이 */
    float fLengthInch = 0.0f;  /* 압력을 받을 친치 단위 길이  */
    float fCvtFtLengthMeter = 0.0f;  /* 변환된 미터값 */
    float fCvtInchLengthMeter = 0.0f; /* 변환된 미터값  */

    // getting triangle information
    printf("Converting Length Data\n");
    printf("Input your Length(ft, inch)\n");
    int nRes = scanf("%f%f", &fLengthFt, &fLengthInch);  /* 실수(float )2개를 입력받는다.  첫번째는fLengthFt, 두번째는 fLengthInch 값을 입력  */

    // calculating
    fCvtFtLengthMeter = fLengthFt * FT2METER;  /* fLengthFt * 0.3048  */
    fCvtInchLengthMeter = fLengthInch * INCH2METER;  /* fLengthInch * 0.0254 */

    // printing result
    printf("Result(Meter): %.4f[m], %.4f[m]\n", fCvtFtLengthMeter, fCvtInchLengthMeter);  /*두 개의 결과를 소수점 4자리 까지 출력  */

    return 0;  /* 프로그램 종료 */
}




// for using scanf, old-type input method
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define KG2SLUG    0.0685218   /* 1kg은 0.0685218 slug와 같다 */

int main(void)  /* 프로그램 시작 */
{
    // initializing variables
    float fWeightKg = 0.0f;    /* 변수이름 fWeightKg 이며 자료형은 float  초기값은 0.0이다. */
    double dCvtKgWeightSlug = 0.0f; /* 변수이름dCvKgWeightSlug 이며 자료형은 double

    // getting triangle information
    printf("Converting Weight Data\n");
    printf("Input your Weight(kg)\n");  /* 무게 (kg)을 입력하세요 */
    int nRes = scanf("%f", &fWeightKg);  /*  %f는 실수 형태  , &fWeightKg은 입력값을 저장할 변수 주소

    // calculating
    dCvtKgWeightSlug = (double)fWeightKg * KG2SLUG;  /* dCvtKgWeightSlug 라는 변수를 double형으로 변환하여 킬로그램 * KG2SLUG(0.0685218) = 슬러그를 표시

    // printing result
    printf("Result(Slug): %.8f[Slug]\n", dCvtKgWeightSlug);  /* %.8f 는 소수점 아래 8자리까지 표시하기, [Slug]단위 표시 */

    return 0;
}
