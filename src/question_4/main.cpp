# include <iostream>
# include <string>
# include "question4.h"

using namespace std;


int main() {
    double m, v;

    while (true) {
        std::cout << "Enter the mass (in kg) of the object (or type '0' to exit): ";
        std::cin >> m;
        if (m == 0) {
            break;
        }

        std::cout << "Enter the velocity (in m/s) of the object: ";
        std::cin >> v;

        double ke = get_kinetic_energy(m, v);
        std::cout << "The kinetic energy of the object is: " << ke << " J" << std::endl;
    }

    return 0;
}