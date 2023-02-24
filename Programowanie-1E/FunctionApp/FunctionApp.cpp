#include <iostream>
 
void ShowTextFromUser()
{
    std::cout << "podaj liczbe \n";
}

int getFirstNumber()
{
    int numberFromUser; 
    ShowTextFromUser();
    std::cin >> numberFromUser;
    return numberFromUser; 
}

void task1()
{
    int numberFroUser ; 
    numberFroUser = getFirstNumber();

    std::cout << "Podwojona wartosc to :" << (numberFroUser * 2) << "\n";
}

void task2()
{
    int numberFroUser ;

   numberFroUser =  getFirstNumber();


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
