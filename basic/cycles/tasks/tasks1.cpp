#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int i = 1;
    int res;
    
    while (n / i != 0) {
        res = n / i;
        i++;
    }
    
    std::cout << res;

    return 0;
}