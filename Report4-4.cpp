#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>   /* rand(), srand() */
#include <time.h>     /* time() */

int main() {
    int lotto[6];
    int user[6];
    int i, j;
    int num;
    int match = 0;

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        num = rand() % 45 + 1;

        for (j = 0; j < i; j++) {
            if (num == lotto[j]) {
                i--; 
                break;
            }
        }

        lotto[i] = num;
    }

    printf("로또 번호 6개 입력 (1~45, 중복X): ");

    for (i = 0; i < 6; i++) {
        scanf_s("%d", &user[i]);

        if (user[i] < 1 || user[i] > 45) {
            printf("범위 오류! 다시 입력: ");
            i--;
            continue;
        }

        for (j = 0; j < i; j++) {
            if (user[i] == user[j]) {
                printf("중복 번호! 다시 입력: ");
                i--;
                break;
            }
        }
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (lotto[i] == user[j]) {
                match++;
            }
        }
    }

    printf("\n=== 컴퓨터 로또 번호 ===\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }

    printf("\n\n=== 결과 ===\n");
    printf("맞은 개수: %d개\n", match);

    if (match == 6) printf("1등입니다!\n");
    else if (match == 5) printf("3등입니다!\n");
    else if (match == 4) printf("4등입니다!\n");
    else if (match == 3) printf("5등입니다!\n");
    else printf("꽝입니다!\n");

    return 0;
}
