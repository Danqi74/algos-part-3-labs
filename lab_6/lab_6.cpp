#include <iostream>
#include <cmath>
#include <iomanip>

// Function to calculate the exact value of y(x)
double exactFunction(double x) {
    return 0.5 * log(fabs((x + 1) / (x - 1)));
}

// Function to calculate the series expansion with n terms
double seriesExpansion(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i <= n; ++i) {
        sum += 1.0 / ((2 * i + 1) * pow(x, 2 * i + 1));
    }
    return sum;
}

// Function to calculate the series expansion with a specified precision
double seriesWithPrecision(double x, double epsilon) {
    double sum = 0.0;
    double term;
    int i = 0;
    do {
        term = 1.0 / ((2 * i + 1) * pow(x, 2 * i + 1));
        sum += term;
        ++i;
    } while (fabs(term) > epsilon);
    return sum;
}

int main() {
    double a = 1.0, b = 2.0;
    int k, n = 5;
    const double epsilon = 0.0001;

    // Введення діапазону [a, b] і кількості точок k
    std::cout << "Введіть k (кількість точок): ";
    std::cin >> k;

    double step = (b - a) / (k - 1);
    std::cout << std::fixed << std::setprecision(10);
    std::cout << std::setw(10) << "x" << std::setw(20) << "Exact y"
        << std::setw(20) << "Series N" << std::setw(20) << "Series Epsilon" << std::endl;

    for (int i = 0; i < k; ++i) {
        double x = a + i * step;

        if (x == 1.0) {
            continue;
        }
        // Обчислення точного значення
        double exactY = exactFunction(x);

        // Обчислення розкладу в ряд для заданого n
        double seriesN = seriesExpansion(x, n);

        // Обчислення розкладу в ряд з заданою точністю
        double seriesEpsilon = seriesWithPrecision(x, epsilon);

        // Вивід результатів
        std::cout << std::setw(10) << x
            << std::setw(20) << exactY
            << std::setw(20) << seriesN
            << std::setw(20) << seriesEpsilon << std::endl;
    }

    return 0;
}
