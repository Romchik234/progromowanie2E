#include <iostream>



//napisz funkcje krota pobierze od uzytkownika liczbe dodatnie 
void task1()
{ 
    int number;
 
       do 
       {
        std::cout << "podaj liczbê dodatni¹ ";
        std::cin >> number;
       } while (number <= 0);
        
       std::cout << "poda³eœ liczbê:" << number; 



}

//napisza funkcje ktora napiszae wszystkie liczby z przedzialu <1;100>
   
void task2()
{
    int currentNumber = 0;
    do
    {
        std::cout << currentNumber << "\n";

        // currentNumber = currentNumber + 1       to samo       | 
        //currentNumber += 1;                      to samo  i to V
        currentNumber++;            //                       <----          
    } while (currentNumber != 1000);
    
}

void task3()
{
    int currentNumber, endNumber;
    std::cout << "podaj przedzial (x-y); X=\n";
    std::cin >> currentNumber;
    std::cout << "Y=\n";
    std::cin >> endNumber;

    if (currentNumber >= endNumber)
        std::cout << "Ÿle poda³eœ liczbê";
    else
    {
        endNumber++;
        do
        {
            std::cout << currentNumber << "\n";

            currentNumber++;
        } while (currentNumber != endNumber);
    }
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    task3();

    
}
