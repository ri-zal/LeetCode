#include <iostream>

int main() {
    int x;
    int reversed_x = 0;

    std::cout << "Enter integer to be reversed: ";
    std::cin >> x;

    while (x != 0) {
        reversed_x = (reversed_x * 10) + (x % 10);
        x /= 10;
    }

    std::cout << reversed_x << std::endl;

    return 0;
}