# include <iostream>
# include <string>
# include "question3.h"

using namespace std;


int main() {
    std::string str;
    bool is_pal;

    while (true) {
        std::cout << "Enter a string (or 'exit' to quit): ";
        std::cin >> str;

        if (str == "exit") {
            break;
        }

        is_pal = is_palindrome(str);

        std::cout << (is_pal ? "true" : "false") << std::endl;
    }

    return 0;
}