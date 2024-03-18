#include <iostream>



int main()
{
    setlocale(0, "Russian");

    int i, n;
    i = 1;
    std::cin >> n;
    

    while (i * i < n) {
        std::cout << i * i << std::endl;
        i++;
    }

    return 0;
}