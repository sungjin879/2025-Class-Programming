#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessGame(void) {
    int answer, user, count = 0;

    srand(time(NULL));      // 랜덤 초기화
    answer = rand() % 100 + 1;  // 1~100 사이 난수

    printf("1부터 100 사이의 숫자를 맞혀보세요!\n");

    while (count < 10) {
        printf("%d번째 시도: ", count + 1);
        scanf_s("%d", &user);

        if (user == answer) {
            printf("정답입니다! (%d회 만에 맞춤)\n", count + 1);
            return;
        }
        else if (user < answer)
            printf("더 큰 수입니다!\n");
        else
            printf("더 작은 수입니다!\n");

        count++;
    }

    printf("실패! 정답은 %d였습니다.\n", answer);
}

int main(void) {
    guessGame();   // 함수 호출
    return 0;
}
