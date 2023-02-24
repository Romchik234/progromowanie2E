#include <iostream>

void task1()
{
    int numberFroUser; 

    std::cout << "podaj liczbe \n"; 
    std::cin >> numberFroUser; 

    std::cout << "Podwojona wartosc to :" << (numberFroUser * 2) << "\n";
}

void task2()
{
    int numberFroUser;

    std::cout << "podaj liczbe \n";
    std::cin >> numberFroUser;

    if (numberFroUser < 0)
        std::cout << "liczba jest ujemna\n";
    else
        std::cout << "liczba jest dodatnia\n"; 
}
int main()
{
    task1();
    task2();
}
