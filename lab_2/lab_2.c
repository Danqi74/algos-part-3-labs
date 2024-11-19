#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Введення числа з клавіатури
    puts("Input an integer number:");
    scanf("%d", &n);

    // Перевірка парності
    if (n % 2 == 0)
        printf("The number %d is even.\n", n);
    else
        printf("The number %d is odd.\n", n);

    // Перевірка, чи більше 100
    if (n > 100)
        printf("The number %d is greater than 100.\n", n);
    else
        printf("The number %d is not greater than 100.\n", n);

    // Перевірка, чи менше 20
    if (n < 20)
        printf("The number %d is less than 20.\n", n);
    else
        printf("The number %d is not less than 20.\n", n);

    // Перевірка, чи закінчується на 3
    if (n % 10 == 3)
        printf("The number %d ends with 3.\n", n);
    else
        printf("The number %d does not end with 3.\n", n);

    // Перевірка, чи закінчується на 0
    if (n % 10 == 0)
        printf("The number %d ends with 0.\n", n);
    else
        printf("The number %d does not end with 0.\n", n);

    // Перевірка, чи ділиться на 5
    if (n % 5 == 0)
        printf("The number %d is divisible by 5.\n", n);
    else
        printf("The number %d is not divisible by 5.\n", n);

    system("pause");
    return 0;
}
