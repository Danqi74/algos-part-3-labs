#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    // Завдання 1: Середнє арифметичне ненульових елементів (розмір масиву 6)
    int arr1[6];
    int sum = 0, count = 0;
    printf("Task 1: Enter 6 integers for the array:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &arr1[i]);
        if (arr1[i] != 0) {
            sum += arr1[i];
            count++;
        }
    }
    double avg1 = (count > 0) ? (double)sum / count : 0;
    printf("Task 1: Average of non-zero elements = %.2f\n\n", avg1);

    // Завдання 2: Середнє арифметичне без мінімального елемента (розмір масиву 8)
    int arr2[8];
    sum = 0, count = 8;
    printf("Task 2: Enter 8 integers for the array:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr2[i]);
        sum += arr2[i];
    }
    int min = arr2[0];
    for (i = 1; i < 8; i++) {
        if (arr2[i] < min)
            min = arr2[i];
    }
    sum -= min;
    double avg2 = (double)sum / (count - 1);
    printf("Task 2: Average excluding the minimum element = %.2f\n\n", avg2);

    // Завдання 3: Середнє арифметичне додатних елементів (розмір масиву 5)
    int arr3[5];
    sum = 0, count = 0;
    printf("Task 3: Enter 5 integers for the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr3[i]);
        if (arr3[i] > 0) {
            sum += arr3[i];
            count++;
        }
    }
    double avg3 = (count > 0) ? (double)sum / count : 0;
    printf("Task 3: Average of positive elements = %.2f\n\n", avg3);

    // Завдання 4: Середнє арифметичне парних елементів (розмір масиву 6)
    int arr4[6];
    sum = 0, count = 0;
    printf("Task 4: Enter 6 integers for the array:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &arr4[i]);
        if (arr4[i] % 2 == 0) {
            sum += arr4[i];
            count++;
        }
    }
    double avg4 = (count > 0) ? (double)sum / count : 0;
    printf("Task 4: Average of even elements = %.2f\n\n", avg4);

    // Завдання 5: Сума квадратів від’ємних елементів (розмір масиву 7)
    int arr5[7];
    int squareSum = 0;
    printf("Task 5: Enter 7 integers for the array:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr5[i]);
        if (arr5[i] < 0) {
            squareSum += arr5[i] * arr5[i];
        }
    }
    printf("Task 5: Sum of squares of negative elements = %d\n\n", squareSum);

    system("pause");
    return 0;
}
