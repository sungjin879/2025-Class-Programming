#include <stdio.h>   /*표준입출력 함수를 쓰기 위해 필요한 헤더*/
int main(void)  /*프로그램 시작점*/
{
    // Integer, unsigned integer, float, char, and string output with format specifiers
/*출력 서식 지정자(format specifiers)는 함수에서 데이터를 출력할 때 이 값이 어떤 종류의 데이터인지 알려줌*/

  // printing each with label and tab (\t), including newline (\n) /* \t:일정간격이 생긴다. \n:줄바꿈 */
    printf("=== Basic Constants ===\n");
    printf("Name\t: %s\n", "Sungwook");  /* %s:문자열을 출력 - Sungwook이 들어감*/
    printf("Initial : %c\n", 'S');  /* %c: 문자를 출력 - S출력*/
    printf("Age : %d\n", 28);   /* %d: 정수를 출력 - 28출력*/

    // setting the total width to be sufficiently large /*전체 출력 너비를 충분히 크게 설정*/
    // including the digits before the decimal point (integer part) + decimal point + decimal point and space  /*전체 폭을 계산할 때 아래 요소들을 모두 포함한다.*/
    printf("Score\t:%10.6f\n", 93.5);  /* %f: 소숫점이 있는 실수 출력 - 전체자릿수 10칸에 소수점 이하 6자리 출력*/
    printf("Count\t: %lld\n", 3000000000);
    /* %d: 기본정수 , %ld: long형 정수, %lld: long long 형 정수, int는 약 21억 까지 가능하지만 30000000000는 그보다 커서 longlong으로 처리*/

    return 0; /*정상종료*/
}





#include <stdio.h>

int main(void) /* int는 main함수가 숫자를 반환한다. main()함수에서 실행 */
{
    // initializing variables   /*주석*/
    char strName[20] = "Sungwook";  /* char은 문자형 데이터를 저장할 때 사용, [20]은 최대 20개의 문자 공간을 만든다. Sungwook은 문자열이라 “ ”로 사용 */
    char chInitial = 'S';
    /* char은 문자하나만 사용하는 자료형, ‘s’는 문자 한개이며 chlnitial 이라는 변수에 28을 저장*/
    int nAge = 28;  /*정수형*/
    float fScore = 93.5f;   /*실수형*/
    long long int nCount = 3000000000;   /*큰 정수형*/

    // Integer, unsigned integer, float, char, and string output with format specifiers
    // printing each with label and tab (\t), including newline (\n)
    printf("=== Basic Constants ===\n");  /* === Basic Constants === 출력 */
    printf("Name\t: %s\n", strName);
    /*  \t 간격띄워줌  %s:문자열 형식 지정 sungwook출력 */
    printf("Initial : %c\n", chInitial);  /* %c: 문자 chInitial 출력 */
    printf("Age : %d\n", nAge); /* %d 정수를 출력 ,  	nAge가 28 출력*/

    // setting the total width to be sufficiently large  /* 전체 출력 너비를 충분히 크게 설정*/
    // including the digits before the decimal point (integer part) + decimal point + decimal point and space  /*소수점 앞의 숫자(정수), 소수점, 소수점 뒤의 숫자까지 모두 포함하라*/
    printf("Score\t:%10.6f\n", fScore); /* 전체 너비가 10칸이고 소수점이하 6자리(.6)를 출력 */
    printf("Count\t: %lld\n", nCount);  /* count:그냥 글자 그대로 출력 , %lld: long long 정수형 데이터를 출력하는 자리, 아주큰 정수 30억을 저장한 변수*/

    return 0;
}







#include <stdio.h> /*표준 입출력헤더파일*/ 

#define PI 3.141593 /* #define는 상수를 정의 할 때 사용  PI는 3.141593라고 정해줌 */

int main(void) /* 프로그램이 시작되는 함수 */
{
    // initializing variables
    int nYear = 2025;  /* int 정수형 데이터  nYear: 변수이름  변수에 2025를 저장 */
    const int nNum = 123;  /* const: 값을 바꿀 수 없는 상수 ,  nNum은 123으로 정해지지면 프로그램 중간에 변경할 수 없다.  */
    char chSample = 'A';  /* chSample이라는 변수에 문자A를 저장하다. */

    // Integer, unsigned integer, float, char, and string output with format specifiers
    // printing each with label and tab (\t), including newline (\n)
    printf("=== Constants & Formats ===\n");
    printf("Course: %s(%s, %d)\n", "C Programming ", "v1", nYear);  /* %s 문자열에 C Programming 변수값을 주고 다음 %s에 문자열 v1변수값, %d에 정수 nYear변수값 넣기 */
    printf("Title : %s \"%s\" %s\n", "C", "printf", "demo");
    printf("PI default%2s: %lf\n", " ", PI);  /* %lf은 double형 실수 출력, 문자열 2칸 띄어서 출력 */
    printf("PI 2 digits : %.2lf\n", PI); /* %.2lf 실수를 소수점 아래 2자리만 출력 */
    printf("Width demo  : [%9d]\n", nNum); /* %9d 정수를 출력하되 전체 폭 9칸으로 맞춤 (앞에 공백을 넣어서 오른쪽으로 정렬)
    printf("Char sample : %c\n", chSample);
    printf("Backslash%3s: \\\n", " ");  /* %3s 공백 3칸 띄우기  ,  \\ 실제 백슬래시 */

    return 0;
}






#include <stdio.h> /* 화면에 글자나 값을 출력할 수 있게 준비하기 */

int main(void) /*프로그램 시작*/
{
    // initializing variables
    char chTemp = 'A';  /* chTemp에 문자 A를 저장 */
    const char* strDoubleQuotes = "double quotes";  /*strDoubleQuotes는 double quotes라는 문자열을 가르킨다. */
    const char* strSingleQuotes = "single quote";  /* strSingleQuotes 는 single quote를 가르킨다. */
    float fAverage = 87.35f;  /* 평균 점수 (fAverage를 87.35라고 저장 */

    // Integer, unsigned integer, float, char, and string output with format specifiers
    // printing each with label and tab (\t), including newline (\n)
    printf("=== Char/String & Escapes ===\n");
    printf("Char : %c, code: %d\n", chTemp, chTemp); /*문자 변수 chTemp를 출력 %c는 문자그대로 ,%d 숫자값*/
    printf("Message:\n"); /*메세지 출력 후 줄바꿈*/
    printf("First line\n"); /* First line 출력하고 줄바꿈 */
    printf("%4sIndented second line\n", " ");  /*%4s는 문자열 4칸 공간을 띄워서 출력*/
    printf("Third line\n"); /* 세번째 줄을 출력*/
    printf("Quotes: \"%s\" and '%s'\n", strDoubleQuotes, strSingleQuotes); /* %s는 문자열 출력 */
    printf("Backlash: \\\n"); /*\\는 백슬래쉬를 하나 출력*/
    printf("Average: [%8.2f]\n", fAverage);  /* 실수인 변수 fAverage를 특정한 형식으로 출력, %8.2f는 전체 8칸 공간에 소수점 아래 2자리까지 표시*/

    return 0;
}