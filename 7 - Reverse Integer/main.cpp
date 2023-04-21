#include <iostream>
#include <vector>


int main() {
    int x;
    std::vector<int> x_parts;

    std::cout << "Enter integer to be reversed: ";
    std::cin >> x;

    while (x != 0) {
        int temp = x % 10;
        x /= 10;
        x_parts.push_back(temp);
    }

    for (int x_part : x_parts) {
        std::cout << x_part;
    }

    std::cout << "\n";

    return 0;
}
