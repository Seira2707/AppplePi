#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));
    int randnum = rand() % 900 + 100;
    int guess;
    int tries = 0;
    int correct = 0;

    while (tries < 10 && !correct) {//10회
        printf("남은 기회: %d\n", 10 - tries);
        printf("세 자리 수 입력 : ");
        scanf("%d", &guess);
        tries++;

        // 스트라이크,볼
        int secretDigit1 = randnum / 100;
        int secretDigit2 = (randnum / 10) % 10;
        int secretDigit3 = randnum % 10;
        int guessDigit1 = guess / 100;
        int guessDigit2 = (guess / 10) % 10;
        int guessDigit3 = guess % 10;
        int strikes = 0;
        int balls = 0;

        if (guessDigit1 == secretDigit1) {
            strikes++;
        } else if (guessDigit1 == secretDigit2 || guessDigit1 == secretDigit3) {
            balls++;
        }
        if (guessDigit2 == secretDigit2) {
            strikes++;
        } else if (guessDigit2 == secretDigit1 || guessDigit2 == secretDigit3) {
            balls++;
        }
        if (guessDigit3 == secretDigit3) {
            strikes++;
        } else if (guessDigit3 == secretDigit1 || guessDigit3 == secretDigit2) {
            balls++;
        }
        printf("Strike: %dS  Ball: %dB", strikes, balls);
        if (strikes == 3) {
            printf("승리!");
            correct = 1;
        }
    }
    if (!correct) { //correct가 0
        printf("실패\n정답 : %d", randnum);
    }
    return 0;
}
