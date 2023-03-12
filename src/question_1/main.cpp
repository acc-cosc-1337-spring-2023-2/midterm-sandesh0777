
#include <iostream>
#include <string>
#include "question1.h"

int main() {
    double gpa;
    std::cout << "Enter your GPA: ";
    std::cin >> gpa;
    
    std::string letter_grade = gpa_to_letter_grade(gpa);
    std::cout << "Your letter grade is: " << letter_grade << std::endl;
    
    return 0;
}
