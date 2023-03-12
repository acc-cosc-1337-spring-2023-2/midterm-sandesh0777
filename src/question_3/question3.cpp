# include <iostream>
# include <string>
#include "question3.h"

using namespace std;

bool is_palindrome(const std::string& str) {
    int len = str.length();
    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len-i-1]) {
            return false;
        }
    }
    return true;
}
