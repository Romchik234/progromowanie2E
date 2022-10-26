#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj siê 
*/




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

	/*	if (secondNumber != 0)
			quotient = firstNumber / secondNumber;

		if (secondNumber != 0)
			std::cout << "Iloraz:" << quotient << "\n";

		if (secondNumber == 0)
			std::cout << "Dzielenie przez zero !!! \n";
			tak robiæ nie wolno by my siê powtarzamy "if"			*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz:" << quotient << "\n";
	}
	else /*w przeciwnym wypadku*/
		std::cout << "Dzielenie przez zero !!! \n";
	
	std::cout << "Koniec programu1 \n";

}
 
/*
Napidz funkcjê która wczyta liczbê i wyœwietli informacjê czy jest ona dodatnia czy nie 
*/

void task2()
{
	int NumberToCheck;
	std::cout << "Podaj liczbe do sprawdzenia:" << "\n";
	std::cin >> NumberToCheck;

	if (NumberToCheck = <0)
		std::cout << "liczba jest ujemna \n"; 
	else
	{
		std::cout << "Liczba jest dodatnia";
	}

}

int main()
{
	//	task1();	
	task2();


}
