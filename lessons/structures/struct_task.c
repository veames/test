#include <stdio.h>
#include <string.h>
#define MAX_ABONENTS 100

// Определение структуры абонента
struct abonent {
    char name[10];
    char second_name[10];
    char tel[10];
};

int main() {
    struct abonent phonebook[MAX_ABONENTS]; // Объявляем массив абонентов
    int count = 0; // Переменная для подсчета текущего количества абонентов
    int choice;    // Переменная для хранения выбора пользователя

    // Основной цикл программы
    while (1) {
        // Вывод меню
        printf("Абонентский справочник:\n");
        printf("1) Добавить абонента\n");
        printf("2) Удалить абонента\n");
        printf("3) Поиск абонентов по имени\n");
        printf("4) Вывод всех записей\n");
        printf("5) Выход\n");
        printf("Выберите пункт меню: ");
        scanf("%d", &choice);
        // Проверка выбора пользователя
        if (choice == 1) {
            // 1) Добавление абонента
            if (count >= MAX_ABONENTS) {
                // Если справочник переполнен
                printf("Справочник переполнен! Невозможно добавить абонента.\n");
            } else {
                // Запрашиваем данные абонента
                printf("Введите имя (не более 9 символов): ");
                scanf("%s", phonebook[count].name);
                printf("Введите фамилию (не более 9 символов): ");
                scanf("%s", phonebook[count].second_name);
                printf("Введите телефон (не более 9 символов): ");
                scanf("%s", phonebook[count].tel);
                // Увеличиваем количество абонентов
                count++;
                printf("Абонент успешно добавлен.\n");
            }
        } else if (choice == 2) {
            // 2) Удаление абонента
            char name[10], second_name[10], tel[10];
            int found = 0; // Флаг для проверки нахождения абонента
            // Запрашиваем данные абонента для удаления
            printf("Введите имя для удаления: ");
            scanf("%s", name);
            printf("Введите фамилию для удаления: ");
            scanf("%s", second_name);
            printf("Введите телефон для удаления: ");
            scanf("%s", tel);
            // Поиск абонента в массиве
            for (int i = 0; i < count; i++) {
                // Проверяем, совпадают ли данные
                if (strcmp(phonebook[i].name, name) == 0 &&
                    strcmp(phonebook[i].second_name, second_name) == 0 &&
                    strcmp(phonebook[i].tel, tel) == 0) {
                    // Если найден, сдвигаем все последующие элементы на одну позицию влево
                    for (int j = i; j < count - 1; j++) {
                        phonebook[j] = phonebook[j + 1];
                    }
                    count--; // Уменьшаем количество абонентов
                    found = 1; // Устанавливаем флаг в 1, что абонент найден
                    printf("Абонент успешно удален.\n");
                    break;
                }
            }
            // Если абонент не был найден
            if (!found) {
                printf("Абонент не найден.\n");
            }
        } else if (choice == 3) {
            // 3) Поиск абонентов по имени
            char search_name[10];
            int found = 0; // Флаг для проверки нахождения совпадений
            // Запрашиваем имя для поиска
            printf("Введите имя для поиска: ");
            scanf("%s", search_name);
            // Ищем все записи с введенным именем
            for (int i = 0; i < count; i++) {
                if (strcmp(phonebook[i].name, search_name) == 0) {
                    // Выводим данные найденного абонента
                    printf("Найден абонент: %s %s, Телефон: %s\n",
                           phonebook[i].name, phonebook[i].second_name, phonebook[i].tel);
                    found = 1; // Устанавливаем флаг в 1
                }
            }
            // Если совпадений не найдено
            if (!found) {
                printf("Абоненты с таким именем не найдены.\n");
            }
        } else if (choice == 4) {
            // 4) Вывод всех записей
            if (count == 0) {
                printf("Справочник пуст.\n");
            } else {
                // Перебираем всех абонентов и выводим их данные
                printf("Список всех абонентов:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d) %s %s, Телефон: %s\n",
                           i + 1, phonebook[i].name, phonebook[i].second_name, phonebook[i].tel);
                }
            }
        } else if (choice == 5) {
            // 5) Выход из программы
            printf("Выход из программы.\n");
            break; // Завершаем цикл и программу
        } else {
            // Неверный ввод
            printf("Неверный пункт меню. Попробуйте снова.\n");
        }
    }
    return 0;
}
