#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int b, c, i, j, k, num;
    int bingo[5][5];
    int input[5][5] = { 0, };

    for (i = 0; i < 5; i++) { //�迭 �����ʱ�ȭ
        for (j = 0; j < 5; j++) {
            bingo[i][j] = (rand() % 25 + 1), (rand() % 25 + 1);
        }
    }

    for (k = 1; k = > 1; k++) { //�Է°��Ǻ�
        scanf("���� �Է����ּ���.%d", &num);
        if ((num < 1 || num > 25)) {
            printf("�߸��� �Է��Դϴ�.\n");
            continue;
        }
        else {
            for (i = 0; i < 5; i++) {
                for (j = 0; j < 5; j++) {
                    printf("%d", input[i][j]);
                }
            }
        }
    }

    return 0;
}