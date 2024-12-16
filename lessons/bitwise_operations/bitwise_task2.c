/*
	2. Вывести двоичное представление целого отрицательного числа, используя битовые операции (число вводится с клавиатуры).
*/

#include <stdio.h>

void printBinary(int num) {
    
    int bits = sizeof(int) * 8;

    for (int i = bits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    printf("Двоичное представление числа %d: ", number);
    printBinary(number);

    return 0;
}