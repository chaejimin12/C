#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int computer = rand() % 3; 
    int me;

    printf("가위(0), 바위(1), 보(2) 중에서 선택하세요: ");
    scanf("%d", &me);

    printf("사용자: ");
    switch (me) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
    }

    printf("컴퓨터: ");
    switch (computer) {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
    }

    if (me== computer) {
        printf("비겼습니다.\n");
    } else if ((me == 0 && computer == 2) || 
               (me== 1 && computer == 0) ||
               (me == 2 && computer == 1)) {
        printf("이겼습니다!\n");
    } else {
        printf("졌습니다.\n");
    }

    return 0;
}
 