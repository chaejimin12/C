#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) {
        if (a < c) {
            min = a;
        } else {
            min = c;
        }
    } else {
        if (b < c) {
            min = b;
        } else {
            min = c;
        }
    }

    printf("입력한 수 중 가장 작은 값은 %d 입니다.\n", min);

    return 0;
}