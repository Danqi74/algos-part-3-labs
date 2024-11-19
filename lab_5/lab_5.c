#include <stdio.h>
#include <stdlib.h>

void printArray2D(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j;

    // Завдання 1: Сума додатних непарних елементів у стовпцях (5x4)
    int arr1[5][4], sum = 0;
    printf("Task 1: Enter 5x4 integers for the array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr1[i][j]);
            if (arr1[i][j] > 0 && arr1[i][j] % 2 != 0) {
                sum += arr1[i][j];
            }
        }
    }
    printf("Task 1: Input array:\n");
    printArray2D(5, 4, arr1);
    printf("Task 1: Sum of positive odd elements in columns = %d\n\n", sum);

    // Завдання 2: Кількість додатних парних елементів у рядках (3x6)
    int arr2[3][6], count = 0;
    printf("Task 2: Enter 3x6 integers for the array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &arr2[i][j]);
            if (arr2[i][j] > 0 && arr2[i][j] % 2 == 0) {
                count++;
            }
        }
    }
    printf("Task 2: Input array:\n");
    printArray2D(3, 6, arr2);
    printf("Task 2: Count of positive even elements in rows = %d\n\n", count);

    // Завдання 3: Кількість непарних елементів у стовпцях (5x3)
    int arr3[5][3];
    printf("Task 3: Enter 5x3 integers for the array:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr3[i][j]);
        }
    }
    printf("Task 3: Input array:\n");
    printArray2D(5, 3, arr3);
    for (j = 0; j < 3; j++) {
        count = 0;
        for (i = 0; i < 5; i++) {
            if (arr3[i][j] % 2 != 0) {
                count++;
            }
        }
        printf("Task 3: Count of odd elements in column %d = %d\n", j, count);
    }
    printf("\n");

    // Завдання 4: Сума від’ємних елементів у рядках (3x5)
    int arr4[3][5];
    printf("Task 4: Enter 3x5 integers for the array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr4[i][j]);
        }
    }
    printf("Task 4: Input array:\n");
    printArray2D(3, 5, arr4);
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 5; j++) {
            if (arr4[i][j] < 0) {
                sum += arr4[i][j];
            }
        }
        printf("Task 4: Sum of negative elements in row %d = %d\n", i, sum);
    }
    printf("\n");

    // Завдання 5: Добуток елементів у діапазоні [1, 5] у стовпцях (4x5)
    int arr5[4][5], product;
    printf("Task 5: Enter 4x5 integers for the array:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr5[i][j]);
        }
    }
    printf("Task 5: Input array:\n");
    printArray2D(4, 5, arr5);
    for (j = 0; j < 5; j++) {
        product = 1;
        for (i = 0; i < 4; i++) {
            if (arr5[i][j] >= 1 && arr5[i][j] <= 5) {
                product *= arr5[i][j];
            }
        }
        printf("Task 5: Product of elements in range [1, 5] in column %d = %d\n", j, product);
    }
    printf("\n");

    system("pause");
    return 0;
}
