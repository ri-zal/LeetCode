#include <iostream>
#include <unordered_map>

int main() {
    int total = 0;
    std::string user_input;
    std::unordered_map<char, int> roman_to_int = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    std::cin >> user_input;

    for (int i = 0; i < user_input.length(); i++) {
        if (i + 1 < user_input.length() && roman_to_int[user_input[i]] < roman_to_int[user_input[i + 1]]) {
            total -= roman_to_int[user_input[i]];
        }
        else {
            total += roman_to_int[user_input[i]];
        }
    }

    std::cout << "Total: " << total << "\n";

    return 0;
}
