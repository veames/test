/*
    3. Заполнить верхний треугольник матрицы 1, а нижний 0.
    Пример:
    0 0 1
    0 1 1 
    1 1 1

    *рисунок из задания неправильный*
*/

#include <stdio.h>
#define N 5

int main(void) {

    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i + j <= N - 1) {
                matrix[i][j] = 1; // Верхний треугольник
            } else {
                matrix[i][j] = 0; // Нижний треугольник
            }
        }
    }

    printf("Матрица:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}