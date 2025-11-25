#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    double v1[3], v2[3];
    double dot;
    double cross[3];

    printf("첫 번째 벡터 입력 (3개): ");
    scanf_s("%lf %lf %lf", &v1[0], &v1[1], &v1[2]);

    printf("두 번째 벡터 입력 (3개): ");
    scanf_s("%lf %lf %lf", &v2[0], &v2[1], &v2[2]);

    dot = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];

    cross[0] = v1[1] * v2[2] - v1[2] * v2[1];
    cross[1] = v1[2] * v2[0] - v1[0] * v2[2];
    cross[2] = v1[0] * v2[1] - v1[1] * v2[0];

    printf("\n 결과 \n");
    printf("내적: %.6f\n", dot);
    printf("외적: ( %.6f , %.6f , %.6f )\n",cross[0], cross[1], cross[2]);

    return 0;
}
