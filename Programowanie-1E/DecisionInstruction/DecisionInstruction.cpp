#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj siê 
*/

/*
Operatory porównania: 

*równoœci			==	
*ró¿noœci			!=
*wiêkszoœæ			>
*mniejsze			< 
*wieksze lub równe	>= 
*mniejsze lub równe	<=

aregument1 >= argument2 

Wynikiem dzia³ania tych operatorów 
jest wartoœæ logiczna true/false typu bool 

bool zmienna = true; 
bool zmienna2 = 5 > 74; 

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

	if (NumberToCheck != 0)
	{
		if (NumberToCheck < 0)
			std::cout << " liczba jest ujemna \n";
		else
			std::cout << "Liczba jest dodatnia";
	}
	else
		std::cout << "liczba rowna zero";
}

/*
Napisz funkcjê, która wczyta liczbêi wyœwietli informacjê 
czy jest ona w zakresie <10,25>.

*/

void task3()
{
	int NumberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia (	¿eby spewnia³ warunek <10/25>):" << "\n";
	std::cin >> NumberToCheck;

	if (NumberToCheck >= 10)
	{
		if (NumberToCheck <= 25)
			std::cout << "Ta liczba spewnia warunek";
		else
			std::cout << "liczba nie spewnia warunek";
	}
	else
		std::cout << "liczba nie spewnia warunek";
	
}

int main()
{
	//	task1();	
	//task2();
	task3();

}