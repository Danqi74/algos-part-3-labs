#include <iostream>
#include <cctype>  // Для функції isupper()

using namespace std;

// Функція для підрахунку числа прописних літер
int num_upper(char *s) {
    int count = 0;  // Лічильник великих літер

    // Проходимо по кожному символу в рядку
    while (*s != '\0') {  // Якщо не досягнуто кінця рядка
        if (isupper(*s)) {  // Якщо символ є прописною літерою
            count++;  // Збільшуємо лічильник
        }
        s++;  // Переходимо до наступного символу
    }

    return count;
}

int main() {
    char str[100];  // Масив для збереження введеного рядка

    // Введення рядка
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Підрахунок прописних літер
    int result = num_upper(str);

    // Виведення результату
    cout << "Number of uppercase letters: " << result << endl;

    return 0;
}
