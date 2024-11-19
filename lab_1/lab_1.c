#include <stdio.h>
#include <stdlib.h>

#define STR1 "Today we are"
#define STR2 "learning how to "
#define STR3 "\"Programm on C++\""
#define STR4 "Programming Assignment"

int main() {
    // Виведення базових рядків
    printf("|%s|\n", STR1);
    printf("|%70.12s|\n", STR2);
    printf("|%70.24s|\n\n", STR3);
    printf("|%20.5s|\n", STR1);
    printf("|%20.8s|\n", STR2);
    printf("|%-20.9s|\n", STR3);

    // Виведення нового рядка STR4
    printf("|%s|\n", STR4); // Виведення рядка STR4 повністю
    printf("|%-20s|\n", "Programming"); // Перше слово на початку рядка
    printf("|%20s|\n", "Programming");  // Перше слово в кінці рядка

    // Ім’я та по батькові студента
    printf("|%s|\n", "Данило Олегович");
    // Прізвище та ім’я студента
    printf("|%s|\n", "Гнип Данило");
    // Назва предмету та прізвище викладача
    printf("|%s|\n", "Алгоритми та структури даних: Сиротюк");
    // Прізвище автора та назва книги
    printf("|%s|\n", "Ірен Роздобудько: Гудзик");
    // Назва міста та вулиці
    printf("|%s|\n", "Львів: Степана Бандери");

    system("pause");
    return 0;
}