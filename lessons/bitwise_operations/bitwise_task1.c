/*
	1. Вывести двоичное представление целого положительного числа, используя битовые операции (число вводится с клавиатуры).
*/

#include <stdio.h>

void BinaryForm(unsigned int n) {

    int bits = sizeof(n) * 8;

    for (int i = bits - 1; i >= 0; i--) {
        int bit = (n & (1 << i));
        if (bit) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
}

int main() {
    unsigned int number;

    printf("Введите положительное целое число: ");
    scanf("%u", &number);

    printf("Двоичное представление числа %u: ", number);
    BinaryForm(number);
    printf("\n");

    return 0;
}




