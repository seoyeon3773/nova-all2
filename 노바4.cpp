#include <stdio.h>

int main() {
    int dan;
    printf("�� ���� ����ұ��? ");
    scanf("%d", &dan);

    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", dan, i, dan * i);
    }

    return 0;
}

