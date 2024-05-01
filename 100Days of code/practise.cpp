#include <iostream>
#include <cmath>

int main() {
    double result = 3 / 2.0; // Perform floating-point division
    int rounded = std::ceil(result); // Round up to the nearest integer

    std::cout << "Result after rounding up: " << rounded << std::endl;

    return 0;
}
