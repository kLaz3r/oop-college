#include "pch.h"
#include <iostream>

using namespace System;

int main(array<System::String ^> ^args)
{
    try {
        int age{};
        std::cout << "Introdu varsta ta: ";
        std::cin >> age;
        if (age > 100) {
            std::cout << "Cam batran tu de fel." << std::endl;
        }
        else {
            throw (age);
        }
    }
    catch (int ageErr) {
        std::cout << "Esti prea tanar." << std::endl;
        std::cout << "Pare rau =[" << std::endl;
    }
    return 0;
}
