#include <iostream>
#include <cmath>

int main() {
    setlocale(0, "Russian");

     char choice;

    do {
        std::cout << "Введите операцию: " << std::endl;
        std::cout << "1. Стандартный калькулятор" << std::endl;
        std::cout << "2. Инженерный калькулятор" << std::endl;
        std::cout << "3. Калькулятор дробей" << std::endl;
        std::cout << "4. Таблица умножения" << std::endl;

        switch (choice) {
            case '1':
                standartCalc();
                break;
            case '2':
                ingenerCalculator();
                break;
            case '3':
                calc2();
                break;
            case '4':
                int number;
                std::cin >> number;
                multiplicationTable(number);
    }

    } while (true);
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
            case '^':
                int number;
                std::cin >> number;
                int result = std::sqrt(number); // написать функцию для нахождения sqrt
                std::cout << result;

        }

    } while(true);
}


void ingenerCalculator() {

};

void calc2() {

};

void multiplicationTable(int number) {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Введите число!\n";
    }

    for (int i = 1; i <= 10; i++) {
        int number;
        std::cin >> number;
        int result = number * i;
        std::cout << "\n" << result << std::endl;
    }

}
