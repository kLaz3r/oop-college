#include "pch.h"
#include <iostream>
#include <string>

using namespace System;

struct Persoana {
    int varsta;
    std::string nume;
};

int main(array<System::String ^> ^args)
{
    int nrPers{0};
    std::cout << "Introdu numarul de persoane: ";
    std::cin >> nrPers;
    Persoana persoane[100];
    for (int i = 0; i < nrPers; i++) {
        std::cout << "Introdu numele persoanei " << i+1 << ": ";
        std::cin >> persoane[i].nume;
        std::cout << "Introdu varsta persoanei " << i+1 << ": ";
        std::cin >> persoane[i].varsta;
    }


    for (int i = 0; i < nrPers; i++) {
        std::cout << "Numele Persoanei " << i + 1 << " este: " << persoane[i].nume << std::endl;
        std::cout << "Varsta Persoanei " << i + 1 << " este: " << persoane[i].varsta << std::endl;
    }

    



    return 0;
}
