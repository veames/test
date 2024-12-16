/*
    1. Поменять в целом положительном числе (типа int) значение третьего байта на введенное пользователем число (изначальное число также вводится с клавиатуры) через указатель (не применяя битовые операции).
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
    int num, newByteValue;

    printf("Введите целое положительное число: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Ошибка: число должно быть положительным.\n");
        return 1;
    }

    printf("Двоичное представление числа %u: ", num);
    BinaryForm(num);
    printf("\n");

    printf("Введите новое значение для третьего байта (0-255): ");
    scanf("%d", &newByteValue);

    if (newByteValue < 0 || newByteValue > 255) {
        printf("Ошибка: значение должно быть в диапазоне от 0 до 255.\n");
        return 1;
    }

    unsigned char *bytePointer = (unsigned char *) &num;
    bytePointer[2] = (unsigned char) newByteValue;

    printf("Изменённое число: %d\n", num);

    printf("Двоичное представление числа %u: ", num);
    BinaryForm(num);
    printf("\n");

    return 0;
}