#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(int a, int b);
int minus(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {

	int a, b, i, select;
	for (i = 1; i >0; i++) {
		printf("\n작업을 선택해주세요.\n1 : 덧셈  2 : 뺄셈  3 : 곱셈  4 : 나눗셈  5 : 종료\n");
		scanf_s("%d", &select);
		
		if (select == 5) {
			break;
		}

		printf("첫 번째 수 입력 : ");
		scanf("%d", &a);
		printf("두 번째 수 입력 : ");
		scanf_s("%d", &b);


		if (select == 1) {
			printf("%d", plus(a, b));
		}
		else if (select == 2) {
			printf("%d", minus(a, b));
		}
		else if (select == 3) {
			printf("%d", multiply(a, b));
		}
		else if (select == 4) {
			printf("%lf", divide(a, b));
		}
	}
}

int plus(int a, int b)
{
	return a + b;
}
int minus(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a * b;
}
double divide(int a, int b)
{
	return (double)a / (double)b;
}
