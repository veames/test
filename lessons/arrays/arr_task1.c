/*
    1. Вывести квадратную матрицу по заданному N.
    Пример N = 3:
    1 2 3
    4 5 6
    7 8 9
*/

#include <stdio.h>
#define N 5

int main(void) {

    int arr[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = (N * i) + j + 1;
            printf("%-4d ", arr[i][j]);
        }
    printf("\n");
    }

    return 0;
}
