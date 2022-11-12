#include <iostream>

int main(){
    char x;
    double num1;
    double num2;
    double result;
    std::cout << "********* Calculator\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> x;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;
    std::cout << "**********************";

    switch(x){
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result: " << result << "\n";
        break;
    default:
        std::cout << "That is not a valid operator\n";
    }
    return 0;
}
