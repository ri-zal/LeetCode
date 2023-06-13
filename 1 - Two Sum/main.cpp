#include <iostream>
#include <vector>

void InputData(std::vector<int>&, int&);
std::vector<int> AddTwo(std::vector<int>&, int);

int main() {
    std::vector<int> nums;
    int target;
    std::cout << "Calling InputData()...\n";
    InputData(nums, target);
    std::cout << "InputData() ended.\n";

    std::cout << "\nCalling AddTwo()...\n";
    std::vector<int> result = AddTwo(nums, target);
    std::cout << "AddTwo() ended.\n";
    if (result.empty()) {
        std::cout << "No solution found.\n";
    }
    else {
        std::cout << "Result: [" << result.at(0)
                  << ", " << result.at(1) << "]\n";
    }

    return 0;
};

void InputData(std::vector<int>& nums, int& target) {
    int elements;
    std::cout << "How many elements do you want to enter? ";
    std::cin >> elements;
    nums.resize(elements);

    std::cout << "Enter elements: ";
    for (int i = 0; i < elements; i++) {
        std::cin >> nums.at(i);
    }

    std::cout << "Enter target: ";
    std::cin >> target;
    
    return;
}

std::vector<int> AddTwo(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }

    return {};
}
