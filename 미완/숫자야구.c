#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand(time(NULL));
    int num, i, a, b, random;
    random = (rand() % 999) + 100;
    int rand1 = random / 100; //������ ���ڸ���
    int rand2 = random % 100 / 10;
    int rand3 = random / 10;
    //printf("\n%d", random); ������Ȯ��
    for (i = 1; 1 <= 11; i++) { //10ȸ �� ����
        int ball = 0;
        int strike = 0;
        if (i == 11) {
            printf("�й�");
            break;
        }
        else{ //�Է¹ް� St/Ball �Ǵ�
            printf("(%d��°)�� �ڸ��� �Է� : ", i);
            scanf_s("%d", &num);
            int num1 = num / 100; //�Է¹������� ���ڸ���
            int num2 = num % 100 / 10;
            int num3 = num / 10;
            if (num == random) {
                printf("����");
                break;
            }
            else if (num1==rand1||num1||rand2||num1||rand3){
                ball++;
            }
            else if (num2 == rand1 || num2 || rand2 || num2 || rand3) {
                ball++;
            }
            else if (num3 == rand1 || num3 || rand2 || num3 || rand3) {
                ball++;
            }
            printf("������ %d\n%dS %dB\n",random, strike, ball);
        
        }
    }
    return 0;
}