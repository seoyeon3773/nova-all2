#include <stdio.h>

int main() {
    int dan;
    printf("몇 단을 출력할까요? ");
    scanf("%d", &dan);

    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", dan, i, dan * i);
    }

    return 0;
}

