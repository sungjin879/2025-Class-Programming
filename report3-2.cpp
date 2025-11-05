#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    
#include <math.h>    

#define N 10

// 평균 계산 함수
double getMean(int arr[]) {
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];
    return (double)sum / N;
}

// 분산 계산 함수
double getVariance(int arr[], double mean) {
    double var = 0.0;
    for (int i = 0; i < N; i++)
        var += (arr[i] - mean) * (arr[i] - mean);
    return var / N;
}

int main(void) {
    int data[N];
    srand(time(NULL));  // 랜덤 초기화

    // 10개 무작위 수 생성 (0~99)
    for (int i = 0; i < N; i++) {
        data[i] = rand() % 100;
        printf("%d ", data[i]);
    }
    printf("\n");

    // 계산
    double mean = getMean(data);
    double var = getVariance(data, mean);
    double std = sqrt(var);

    printf("평균: %.2f\n", mean);
    printf("분산: %.2f\n", var);
    printf("표준편차: %.2f\n", std);

    return 0;
}
