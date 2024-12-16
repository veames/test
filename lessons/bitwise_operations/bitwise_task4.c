/*
	4. Поменять в целом положительном числе (типа int) значение третьего байта на введенное пользователем число (изначальное число также вводится с клавиатуры)
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

    int number, new_byte;

    printf("Введите исходное положительное число: ");
    scanf("%d", &number);

    printf("Двоичное представление числа %u: ", number);
    BinaryForm(number);
    printf("\n");

    printf("Введите новое значение для третьего байта (0-255): ");
    scanf("%d", &new_byte);

    if (new_byte < 0 || new_byte > 255) {
        printf("Ошибка: значение должно быть в диапазоне от 0 до 255.\n");
        return 1;
    }

    number &= ~(0xFF << 16);  // Обнуление третьего байта

    number |= (new_byte << 16);  // Устанавливаем новое значение для третьего байта

    printf("Измененное число: %d\n", number);

    printf("Двоичное представление числа %u: ", number);
    BinaryForm(number);
    printf("\n");

    return 0;
}