#include <vector>
#include <iostream>

int main() {
    int number;
    std::vector<int> factors;

    std::cout << "Enter the number: ";
    std::cin >> number;

    if(number < 1) {
        std::cout << "Only positive numbers allowed.";
        return 0;
    }


    factors.push_back(1);

    for(int i = 2; i < number - 1; i++) {
        if(number % i == 0) {
            factors.push_back(i);
        }
    }

    factors.push_back(number);

    std::cout << "Factors of " << number << ": ";
    for(int i = 0; i < factors.size(); i++) {
        if(i + 1 != factors.size()) {
            std::cout << factors.at(i) << ", ";
        }
        else {
            std::cout << factors.at(i);
        }
    }

    std::cout << std::endl;

    return 0;
}