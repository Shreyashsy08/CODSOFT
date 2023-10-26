#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    // Input
    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cerr << "Error: Division by zero is not allowed." << std::endl;
                return 1;  // Exit with an error code
            }
            result = num1 / num2;
            break;
        default:
            std::cerr << "Error: Invalid operation." << std::endl;
            return 1;  // Exit with an error code
    }

    // Output
    std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;  // Exit successfully
}