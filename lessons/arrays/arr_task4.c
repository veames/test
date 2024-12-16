/*
    4. Заполнить матрицу числами от 1 до N2 улиткой.
    Пример:
    1 2 3 4 5
    16 17 18 19 6
    15 24 25 20 7
    14 23 22 21 8
    13 12 11 10 9   
*/

#include <stdio.h>
#define N 5

void fillSpiral(int matrix[N][N]) {

    int num = 1;             // Заполнение матрицы с 1
    int left = 0;            // Левая граница
    int right = N - 1;       // Правая граница
    int top = 0;             // Верхняя граница
    int bottom = N - 1;      // Нижняя граница

    while (left <= right && top <= bottom) {
        // Заполняем верхнюю строку слева направо
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++; // Сдвигаем верхнюю границу вниз

        // Заполняем правый столбец сверху вниз
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--; // Сдвигаем правую границу влево

        // Заполняем нижнюю строку справа налево (если осталась)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--; // Сдвигаем нижнюю границу вверх
        }

        // Заполняем левый столбец снизу вверх (если остался)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++; // Сдвигаем левую границу вправо
        }
    }
}

void printMatrix(int matrix[N][N]) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%-4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int matrix[N][N];

    fillSpiral(matrix);
    printMatrix(matrix);

    return 0;
}
