// Project8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include "Money.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Money amount1, amount2, result;

    std::cout << "Введіть першу суму:\n";
    amount1.Read();

    std::cout << "Введіть другу суму:\n";
    amount2.Read();

    // Додавання
    result = amount1 + amount2;
    std::cout << "Сума: " << result.toString() << std::endl;

    // Віднімання
    result = amount1 - amount2;
    std::cout << "Різниця: " << result.toString() << std::endl;

    // Порівняння
    if (amount1 < amount2) {
        std::cout << "Сума 1 менша за суму 2\n";
    }
    else {
        std::cout << "Сума 1 більша або дорівнює сумі 2\n";
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
