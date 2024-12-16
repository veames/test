/*
	3. Найти количество единиц в двоичном представлении целого положительного числа (число вводится с клавиатуры).
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
    printf("Введите целое положительное число: ");
    scanf("%u", &number);

    printf("Двоичное представление числа %u: ", number);
    BinaryForm(number);
    printf("\n");

    int count = 0;
    while (number > 0) {
        count += number & 1;
        number >>= 1;
    }

    printf("Количество единиц в двоичном представлении: %d\n", count);
    return 0;
}