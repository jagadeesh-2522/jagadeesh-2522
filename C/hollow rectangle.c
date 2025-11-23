#include <stdio.h>

int main() {
    int i, j, W, L;
    scanf("%d %d", &W, &L);   // width first, length next

    for(i = 1; i <= L; i++) {       // L = rows
        for(j = 1; j <= W; j++) {   // W = columns
            if(i == 1 || i == L || j == 1 || j == W)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

