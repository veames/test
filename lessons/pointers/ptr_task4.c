/*
    4. Напишите программу, которая ищет введенной строке (с клавиатуры введенную подстроку (с клавиатуры) и возвращает указатель на начало подстроки, если подстрока не найдена в указатель записывается NULL. 
    В качестве срок использовать статические массивы.
*/

#include <stdio.h>
#include <string.h>

// Функция для поиска подстроки в строке
char* findSubstring(const char *str, const char *substr) {
    return strstr(str, substr);
}

int main() {
    char str[100];
    char substr[100];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    // Убираем символ новой строки (\n), если он есть в конце строки
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Введите подстроку: ");
    fgets(substr, sizeof(substr), stdin);

    // Убираем символ новой строки (\n), если он есть в конце подстроки
    len = strlen(substr);
    if (len > 0 && substr[len - 1] == '\n') {
        substr[len - 1] = '\0';
    }

    // Ищем подстроку в строке
    char *result = findSubstring(str, substr);

    if (result != NULL) {
        printf("Подстрока найдена: %s\n", result);
        printf("Указатель на начало подстроки: %p\n", (void*)result);
    } else {
        printf("Подстрока не найдена\n");
    }

    return 0;
}

