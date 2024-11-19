#include <stdio.h>
#include <stdlib.h>

int main() {
    // Завдання 1: Сума чисел, кратних 3, доки останнє число не стане більше 21
    int sum = 0, n = 0, a = 0;
    while (a <= 21) {
        a += 3;   // Наступне число, кратне 3
        sum += a; // Додаємо до суми
        n++;      // Лічильник циклів
    }
    printf("Task 1: Sum of multiples of 3 until the last number > 21\n");
    printf("Sum = %d, Last number = %d, Loops = %d\n\n", sum, a, n);

    // Завдання 2: Сума чисел, що вводяться, доки сума не стане більше 100
    sum = 0, n = 0;
    int input;
    printf("Task 2: Enter integers (sum until > 100):\n");
    while (sum <= 100) {
        printf("Enter a number: ");
        scanf("%d", &input);
        sum += input;
        n++;
    }
    printf("Sum = %d, Loops = %d\n\n", sum, n);

    // Завдання 3: Сума чисел, кратних 4, доки останнє число не стане більше 36
    sum = 0, n = 0, a = 0;
    while (a <= 36) {
        a += 4;   // Наступне число, кратне 4
        sum += a; // Додаємо до суми
        n++;      // Лічильник циклів
    }
    printf("Task 3: Sum of multiples of 4 until the last number > 36\n");
    printf("Sum = %d, Last number = %d, Loops = %d\n\n", sum, a, n);

    // Завдання 4: Сума чисел, що вводяться, доки сума не стане більше 50
    sum = 0, n = 0;
    printf("Task 4: Enter integers (sum until > 50):\n");
    while (sum <= 50) {
        printf("Enter a number: ");
        scanf("%d", &input);
        sum += input;
        n++;
    }
    printf("Sum = %d, Loops = %d\n\n", sum, n);

    // Завдання 5: Сума чисел, кратних 5, кінцева кількість циклів вводиться
    int loops;
    sum = 0, n = 0, a = 0;
    printf("Task 5: Enter the number of loops: ");
    scanf("%d", &loops);
    while (n < loops) {
        a += 5;   // Наступне число, кратне 5
        sum += a; // Додаємо до суми
        n++;
    }
    printf("Sum of multiples of 5 = %d, Last number = %d, Loops = %d\n", sum, a, n);

    system("pause");
    return 0;
}
