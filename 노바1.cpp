#include <stdio.h>

// 재귀함수로 팩토리얼 계산
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

// 결과를 포인터로 전달
void calculate(int input, int *result) {
    *result = factorial(input);
}

int main() {
    int num;
    int result;

    printf("팩토리얼 계산기입니다, 형님!\n");
    printf("정수를 입력해주십시오: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("음수는 계산 불가합니다, 형님.\n");
    } else {
        calculate(num, &result);
        printf("%d의 팩토리얼은 %d입니다, 형님!\n", num, result);
    }

    return 0;
}

