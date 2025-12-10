#include <stdio.h>

/*
구조체(struct)
a, b, c 각각이 "서로 다른 메모리 공간"을 가진다
따라서 a 값을 바꿔도 b, c 값은 영향을 받지 않는다
멤버들이 독립된 방을 따로따로 가지고 있다
 */
struct Struct {
    int a;      // 정수 멤버
    float b;    // 실수 멤버
    char c;     // 문자 멤버
};

/*
 공용체(union)
 a, b, c가 "하나의 메모리 공간을 공유"함
 즉, 한 멤버를 저장하면 같은 공간을 덮어쓰기 때문에
 이전 멤버의 값이 깨짐(덮어써져서 사라짐)
 마지막으로 저장한 멤버만 정상
 */
union Union {
    int a;      /*같은 4바이트 공간을 int로 해석*/
    float b;    /*같은 4바이트 공간을 float로 해석*/
    char c;     /*같은 4바이트 공간을 char(1바이트)로 해석*/
};

int main() {
    struct Struct s;
    union Union u;

    printf("구조체(struct) 예제\n");

    /* 구조체는 각각 독립된 메모리에 저장되므로 서로 영향을 주지 않음 */
    s.a = 10;
    s.b = 3.14f;
    s.c = 'A';

    printf("s.a = %d\n", s.a);       // 정상 출력
    printf("s.b = %.2f\n", s.b);     // 정상 출력
    printf("s.c = %c\n", s.c);       // 정상 출력

    /* 구조체는 각 멤버의 크기 합보다 크게 만들어짐(패딩 포함) */
    printf("\nsizeof(struct MyStruct) = %zu\n", sizeof(struct Struct));

    printf("\n공용체(union) 예제\n");

    /*
     * 공용체는 a, b, c가 동일한 메모리를 공유하므로
     * u.a = 10 을 저장하면 메모리에 "10의 비트패턴"이 들어감
     */
    u.a = 10;
    printf("u.a = %d\n", u.a);

    /*
     * 다음 줄에서 u.b = 3.14f 를 저장하면
     * 같은 메모리 공간에 "3.14의 비트패턴"으로 덮어씀
     * → 따라서 u.a 는 더 이상 10이 아님 (같은 메모리라서 깨짐)
     */
    u.b = 3.14f;
    printf("u.b = %.2f\n", u.b);
    printf("그런데 u.a %d (깨짐: 같은 공간을 float 패턴으로 덮음)\n", u.a);

    /*
     * u.c = 'A' 를 저장하면
     * 메모리의 첫 1바이트에 'A'(65) 값이 들어가고
     * 나머지 바이트는 이전 float 비트 잔재가 남아있음
     * → 그래서 u.b 를 보면 완전히 깨진 부동소수점 패턴이 됨
     */
    u.c = 'A';
    printf("u.c 저장 후 → u.c = %c\n", u.c);
    printf("그리고 u.b 는? → %.2f (깨짐: char 저장이 float 메모리를 덮음)\n", u.b);

    /* 공용체 크기는 가장 큰 멤버(float 또는 int)의 크기(4바이트) */
    printf("\nsizeof(union MyUnion) = %zu\n", sizeof(union Union));

    return 0;
}
