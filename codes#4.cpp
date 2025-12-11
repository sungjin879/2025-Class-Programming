// for using scanf, old-type input method
#pragma warning(disable:4996) /*비주얼 스튜다오에서 보안 경고 C4996을 끄는 지시문*/
#define _CRT_SECURE_NO_WARNINGS  /*보안관련 경고를 끄는 전처리 매크로*/

#include <stdio.h> /* 표준입출력 헤더 printf나 scnaf사용을 위해*/

#define END_COND 999 /*매크로 정의  프로그램 종료를 위한 값을 999로 정해줌*/

int main(void) /* 프로그램의 시작점*/
{
    int score = 0; /* 정수형 변수 score 선언 및 초기화 */

    while (1)  /*break를 만날때 까지 반복*/
    {
        printf("Please input your score:");/*점수 입력*/
        scanf("%d", &score); /*정수 하나를 키보드에서 입력받아 score에 저장한다. &score는 변수의 주소이고 scanf가 주소값을 채워준다.*/

        if (score == END_COND) /*입력값이 999면 종료*/
        {
            printf("Program Terminated\n"); /* Program Terminated 출력하고 Break로 루프탈출*/
            break;
        }

        if (score >= 90) /*90이상 A*/
            printf("A\n");
        else if (score >= 80) /*80~89 B*/
            printf("B\n");
        else if (score >= 70) /*70 ~ 79는 C*/
            printf("C\n");
        else /*그외 0~69는 D*/
            printf("D\n");
    }
    return 0;
}




#include <stdio.h> /* 표준입출력을 사용-> printf를 사용하려면 필요하다*/

int main(void) /*프로그램 시작점 main함수부터 실행*/
{
    int a = 7, b = 10, c = 9; /* 정수형 변수 a,b,c를 만들고 각각 7,10,9로 초기화한다.*/

    int max_ab = (a > b) ? a : b; /*조건 a가 b보다 큰가? 참이면 a출력 , 틀리면 b출력 ->max_ab는 b의값 10이 된다. */
    int max = (max_ab > c) ? max_ab : c; /* max는 max_ab와 c를 비교한다. max_ab는 10이고 c는 9 즉 참 -> max는 max_ab와 같은 10이된다.*/
    printf("%d\n", max);

    return 0;
}



// for using scanf, old-type input method
#pragma warning(disable:4996) /* scanf를 사용할때 경고문 끄기*/
#define _CRT_SECURE_NO_WARNINGS /* 경고를 안나오게 하는 매크로*/

#include <stdio.h> /*표준입출력 헤더*/

#define DECEND_DECISION(a, b) (a > b) ? a : b /*매크로 ) DEXEND_DECISION(x,y)를 쓰면 ->  (x:y)? x:y로 치환 */

int main(void) /*프로그램 시작점*/
{
    int a = 7, b = 10, c = 9; 

    int max_ab = DECEND_DECISION(a, b); /* int max_ab = (a > b) ? a : b;로 인식 결과-> max_ab =10*/
    int max_final = DECEND_DECISION(max_ab, c); /*(max_ab > c) ? max_ab : c로 인식 -> 10>9 -> 참 -> max_final =10*/
    printf("max_final:%d\n", max_final); /*max_final:10 결과값*/

    return 0;
}




#include <stdio.h>  /*표준입출력 헤더*/

enum Mode { MODE_IDLE = 0, MODE_RUN = 1, MODE_ERROR = 2 }; /*enum = 여러개의 상수값들의 집합을 정의*/

int main(void) /*프로그램 시작점*/
{
    enum Mode m = MODE_RUN; /* m이라는 변수를 Mode 타입으로 선언한다. -> m값은 1로 설정*/

    switch (m) /* m의 값을 판단하여 해당 case로 이동 즉 MODE_RUN으로 이동*/
    {
    case MODE_IDLE:
        printf("IDLE\n");
        break;
    case MODE_RUN:
        printf("RUN\n"); /*RUN출력  break로 switch로 종료-> 이부분이 실행*/
        break;
    case MODE_ERROR:
        printf("ERROR\n");
        break;
    default:
        printf("UNKNOWN\n");
        break;
    }
    return 0;
}


// for using scanf, old-type input method
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define END_COND 999-> /*END_COND이름 -> 999값 치환하는 매크로*/

enum MODE { MODE_IDLE = 0, MODE_RUN = 1, MODE_ERROR = 2 }; 
enum SEASON { SPRING = 11, SUMMER = 22, AUTUMN = 33, WINTER = 44 };

int main(void) /*프로그램 시작점*/
{
    int nMode = MODE_IDLE; /* nMode라는 int라는 변수선언, 처음에는 0 */
    while (1) /* 무한루프 */
    {
        printf("Please input your mode:\n");
        printf("MODE_IDLE=0, MODE_RUN=1, MODE_ERROR=2, END_COND=999\n");
        scanf("%d", &nMode); /*키보드에서 정수를 입력받아 nMode에 저장 -  nMode변수의 주소 = &nMode*/

        if (nMode == END_COND) /*만약 사용자가 999를 입력하면 */
        {
            printf("Program Terminated\n"); /*출력*/
            break;/* break로 while문 탈출*/
        }

        switch (nMode) /*입력한 값에 따라 모드 출력*/
        {
        case MODE_IDLE:  /* 0 */
            printf("MODE::IDLE\n");
            break;
        case MODE_RUN:  /* 1 */
            printf("MODE::RUN\n");
            break;
        case MODE_ERROR: /* 2 */
            printf("MODE::ERROR\n");
            break;
        default:
            printf("MODE::UNKNOWN\n"); /* 그외숫자 */
            break;
        }
        printf("\n");
    }


    return 0; /* while 끝 999입력할 때 까지 계속 반복  */
}




#include <stdio.h>

int main(void)
{
    int level = 1; /*case 1부터 실행*/
    int score = 0;

    switch (level)
    {
    case 1:
        score += 10;
    case 2:
        score += 20;
    default:
        score += 100;
    }

    printf("fall-through: %d\n", score); /*130출력*/

    score = 0; /*score = 0으로 초기화*/
    switch (level)
    {
    case 1: score += 10; break; /*실행*/
    case 2: score += 20; break;  /*실행 x*/
    default: score += 100; break;
    }
    printf("with break: %d\n", score);   /* 출력 with break:10*/
    return 0;
}



// for using scanf, old-type input method
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int level = 1;
    int score = 0;

    switch (level)
    {
    case 1:
        score += 10;/*실행 -> score+=10 -> secore =10, 브레이크 없어서 다음진행*/
    case 2:
        score += 20; /* case2: -> score += 20 -> score =30 , 브레이크 없어서 진행*/
    default:
        score += 100; /*default: -> score +=100 -> score=130*/
    }

    printf("fall-through: %d\n", score);

    score = 0;
    switch (level)
    {
    case 1:
    case 2:
        score += 20;
        break; /*실행종료*/
    default:
        score += 100;
        break;
    }
    printf("with break: %d\n", score); /*출력) with break: 20*/
    return 0;
}


