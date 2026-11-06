#include <iostream>
#include <cmath>
#include <iomanip>

void printHeader() {
    std::cout << "Виконавець:Стахів Єгор, група ІТК-12\n";
    std::cout << "Программа для розрахування математичного прикладу\n";
}

double f(double x) {
    const double PI = std::acos(-1.0);
    const double E = std::exp(1.0);

    double term1 = std::sin(16.0 / 46.0);
    double term2 = 8.0 * PI;
    double term3 = 53.0 * E * (13.0 / ((x + 9.0) * (x - 15.0)));
    double term4 = 7.0 * std::atan(x + 8.0);
    double term5 = 10.0 / (x + 5.0);

    return term1 + term2 - term3 - term4 - term5;
}

int main() {
    std::setlocale(LC_ALL, "Russian");

    printHeader();

    std::cout << "Введіть значення x: ";
    double x;
    std::cin >> x;

    bool is_undefined = false;
    double result = 0.0;

    if (std::cin.fail()) {
        std::cout << "wrong input\n";
        
        is_undefined = true;
    }
    else {
        is_undefined = (x == -9.0 || x == 15.0 || x == -5.0);
        if (!is_undefined) {
            std::cout << "***** do calculations ... ";
            result = f(x);
            std::cout << "done\n";
        }
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "for x = " << x << "\n";

    if (is_undefined && std::cin.fail()) {
       
        std::cout << "result = undefined\n";
    }
    else if (is_undefined) {
        std::cout << "result = undefined\n";
    }
    else {
        std::cout << std::fixed << std::setprecision(9);
        std::cout << "result = " << result << "\n";
    }

    return 0;
}