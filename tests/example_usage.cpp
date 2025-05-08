#include <iostream>
#include "SaldoranCore/string_list_literal.h"

using namespace SaldoranCore;

void action(const std::string& key) {
    auto units = "km,cm,inch,kg"_l;

    int index = units.indexOf(key);

    if (index == -1) {
        std::cout << "Unit not found.\n";
        return;
    }

    switch (index) {
        case 0: std::cout << "Kilometers\n"; break;
        case 1: std::cout << "Centimeters\n"; break;
        case 2: std::cout << "Inches\n"; break;
        case 3: std::cout << "Kilograms\n"; break;
    }
}

int main() {
    action("cm");   // Centimeters
    action("mile"); // Not found
}