#include <stdio.h>

int main(void) {
    //int n;
    //scanf("%d", &n);
    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*", j);
        }
        printf("\n");
    }
    return 0;
}




