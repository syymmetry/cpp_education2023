#include <iostream>

int main() {
    setlocale(0, "Russian");

    std::cout << "Введите операцию: " << std::endl;
    std::cout << "1. Стандартный калькулятор" << std::endl;
    std::cout << "2. Инженерный калькулятор" << std::endl;
    std::cout << "3. Калькулятор дробей" << std::endl;
    std::cout << "4. Таблица умножения" << std::endl;
}


void standartCalc() {
    char operation;
    double number1;
    double number2;

    do {
        std::cout << "Введите операцию (+, -, *, /, ^, info)" << std::endl;
        std::cin >> operation;

        switch (true) {
            case '1':
                std::cin >> number1 >> number2;
                double result = number1 + number2;
            case '2':
                std::cin >> number1 >> number2;
                double result = number1 - number2;
            case '3':
                std::cin >> number1 >> number2;
                double result = number1 * number2;
            case '4':
                std::cin >> number1 >> number2;
                double result = number1 / number2;
        }

    } while
    
}