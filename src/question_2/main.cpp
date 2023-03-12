#include <iostream>
#include <string>
#include "question2.h"
using namespace std;

int main() {
    int num1, num2, gcd;
    char choice;

    do {
        std::system("clear");
        std::cout << "Enter first integer (1-200): ";
        std::cin >> num1;
        std::cout << "Enter second integer (1-200): ";
        std::cin >> num2;

        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            std::cout << "Invalid input. Please enter integers between 1 and 200.\n";
            continue;
        }

        gcd = find_gcd(num1, num2);
        std::cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

        std::cout << "Press 'q' to quit or any other key to continue: ";
        std::cin >> choice;
    } while (choice != 'q');

    return 0;
}

