#include <iostream>

int main() {
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    int power = 1;
    while (power <= N) {
        std::cout << power << " ";
        power *= 2;
    }

    return 0;
}