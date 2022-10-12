#include <iostream>

/*
Napisz funkcjê która wczyta dwie liczby 
i wykona dzielenia na nich 
*/


void task1()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe pierwsza:" << "\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe: \n";
	std::cin >> secondNumber;

	// iloraz; 
	int quotient;

	quotient = firstNumber / secondNumber;

	
	std::cout << "Iloraz:" << quotient << "\n";

}

int main()
{
	task1();


}
