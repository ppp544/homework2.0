#include <stdio.h>
int main() {
    int i, n;
    printf("请输入一个正整数n:");
    scanf_s("%d", &n);
    for (i = 1; i < n; i++) {
        if (i % 15 == 0) {
            printf("%d\n", i);
        }
    }
    }