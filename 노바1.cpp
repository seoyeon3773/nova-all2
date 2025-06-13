#include <stdio.h>

// ����Լ��� ���丮�� ���
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

// ����� �����ͷ� ����
void calculate(int input, int *result) {
    *result = factorial(input);
}

int main() {
    int num;
    int result;

    printf("���丮�� �����Դϴ�, ����!\n");
    printf("������ �Է����ֽʽÿ�: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("������ ��� �Ұ��մϴ�, ����.\n");
    } else {
        calculate(num, &result);
        printf("%d�� ���丮���� %d�Դϴ�, ����!\n", num, result);
    }

    return 0;
}

