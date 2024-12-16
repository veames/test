/*
    2. Вывести заданный массив размером N в обратном порядке.
    Пример:
    Ввод –> 1 2 3 4 5
    Вывод –> 5 4 3 2 1 
*/

#include <stdio.h>
#define N 5

int main(void) {

    int arr[N];
    
    printf("Введите элементы массива: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Элементы массива в обратном порядке: ");
    for (int j = N - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}