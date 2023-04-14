#include <stdio.h>

int main() {

    int x;
    int y;
    int z;

    printf("x값을 입력하시오: ");
    scanf("%d", &x);

if (x <= 0) {
        y = x * x - 9 * x + 2;
        printf("f(x) = %d", y);
    } else {
        z = 7 * x + 2;
        printf("f(x) = %d", z);
    }

    return 0;
}