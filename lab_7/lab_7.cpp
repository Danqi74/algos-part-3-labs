#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функція для заповнення матриці випадковими числами
void fillMatrix(int matrix[][10], int size) {
    srand(time(0));  // Ініціалізація генератора випадкових чисел
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 100 + 1;  // Генерація випадкових чисел від 1 до 100
        }
    }
}

// Функція для видалення вибраного рядка
void removeRow(int matrix[][10], int &size, int rowToDelete) {
    if (rowToDelete < 0 || rowToDelete >= size) {
        cout << "Невірний номер рядка!" << endl;
        return;
    }

    for (int i = rowToDelete; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = matrix[i + 1][j];  // Переміщуємо кожен рядок на одну позицію вгору
        }
    }

    // Заповнюємо останній рядок нулями
    for (int j = 0; j < size; j++) {
        matrix[size - 1][j] = 0;
    }

}

// Функція для виведення матриці
void printMatrix(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int size = 5;  // Розмір матриці (можна змінити)
    int matrix[10][10];  // Матриця розміром 10x10 (максимум)

    // Заповнення та виведення початкової матриці
    cout << "Original Matrix:" << endl;
    fillMatrix(matrix, size);
    printMatrix(matrix, size);

    // Вибір рядка для видалення
    int rowToDelete;
    cout << "\nEnter the row number to delete (0 to " << size - 1 << "): ";
    cin >> rowToDelete;

    // Видалення вибраного рядка
    removeRow(matrix, size, rowToDelete);

    // Виведення матриці після видалення рядка
    cout << "\nMatrix after removing row " << rowToDelete << ":" << endl;
    printMatrix(matrix, size);

    return 0;
}
