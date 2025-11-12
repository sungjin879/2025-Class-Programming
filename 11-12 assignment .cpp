#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double data[10]; /* 데이터 10개 저장 */
    double mean = 0, var = 0, std = 0, dev;
    int rank[10];

    printf("실수 데이터 10개를 입력하세요:\n");
    for (int i = 0; i < 10; i++) {  /* 10개의 실수 입력 */
        if (scanf_s("%lf", &data[i]) != 1) {  /* 입력 실패하면 종료 */
            printf("입력 오류\n");
            return 0;
        }
        mean += data[i];  /* 합계 */
    }

    mean /= 10.0;  /* 평균 */

    for (int i = 0; i < 10; i++) {
        dev = data[i] - mean;        /* 편차 */
        var += dev * dev;            /* 편차의 제곱 */
    }
    var /= 10.0;

    /* 표준편차 계산 (sqrt 없이 뉴턴 방법으로 근사- 챗지피티) */
    if (var == 0.0) {
        std = 0.0;  /* 분산이 0이면 표준편차도 0 */
    }
    else {
        double x = (var > 1.0) ? var : 1.0;  /* 0 방지용 초기값 - 챗지피티*/
        for (int i = 0; i < 6; i++) {        /* 6번 반복하여 수렴 - 챗지피티*/
            x = 0.5 * (x + var / x);         /* 뉴턴 반복 공식 - 챗지피티 */
        }
        std = x;
    }

    /* 순위 계산 */
    for (int i = 0; i < 10; i++) {
        rank[i] = 1;
        for (int j = 0; j < 10; j++) {
            if (data[j] > data[i]) rank[i]++; /* 자기보다 큰 값 있으면 등수+1 */
        }
    }

    /* 출력 */
    printf("\n=== 결과 ===\n");
    printf("평균: %.1f\n", mean);
    printf("분산: %.1f\n", var);
    printf("표준편차: %.3f\n", std);

    printf("\n데이터 및 순위:\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d번째 데이터: %.1f → 순위 %d\n", i + 1, data[i], rank[i]);
    }

    return 0; /* 1 2 3 4 5 6 7 8 9 10 으로 넣어야 오류가 안남*/
}