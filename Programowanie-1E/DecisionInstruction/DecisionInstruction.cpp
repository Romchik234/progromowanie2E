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
Operatory logiczne:
F-false
T-true 

			and				or			not
A	B	  A && B	      A || B		!A

F	F		F				F			T
F	T		F				T			T
T	F		F				T			F
T	T		T				T			F


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

	/*
	if (NumberToCheck >= 10)
	{
		if (NumberToCheck <= 25)
			std::cout << "Ta liczba spewnia warunek";
		else
			std::cout << "liczba nie spewnia warunek";
	}
	else
		std::cout << "liczba nie spewnia warunek";
	*/

	if (NumberToCheck >= 10 && NumberToCheck <= 25)
		std::cout << "liczba jest w zakresie \n";
	else
		std::cout << "liczba nie jest w zakresie \n";

}

/*
Napisz funkcjê która wczyta liczbê i wyœwietli informacje czy jest ona parzysta czy nie. 
*/
void task4()
{
	int numberToCheck, rest;
	
	std::cout << "Podaj liczbê do sprawdzenia \n";
	std::cin >> numberToCheck; 

	rest = numberToCheck % 2;
	
	if (!(rest > 0))
		std::cout << "liczba jest parzysta \n";
		
	else
		std::cout << "liczba nie parzysta \n";


}

/*
Podaj bok kwadratu i wylicz pole i obwód 
*/
void task5()
{
	int bokKwadratu , Obwod , Pole;

	std::cout << "Podaj bok kwadratu \n";
	std::cin >> bokKwadratu;

	Obwod = bokKwadratu * 4;
	Pole = bokKwadratu * 2; 

	std::cout << "Pole:" << Pole << "\n";
	std::cout << "Obwod" << Obwod << "\n";
}

/*
napisz funkcjêktóra wczyta 2 liczby i powie która liczba jest wiêksza 
*/
void task6()
{
	int firstNumber, secondNumber;

	std::cout << "podaj pierwssza liczbe \n";
	std::cin >> firstNumber;

	std::cout << "podaj drug¹ liczbe \n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber << "\t jest wieksza \n";
	else
		std::cout << secondNumber << "\t jest wieksza \n";
}

/*
Napisz instrukcje ktora wczyta 3 liczby i poka¿e która z nich najwêksza 
*/
void task7()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "Podaj Pierwsza liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj Druga liczbe \n";
	std::cin >> secondNumber;
	std::cout << "Podaj Trzecia liczbe \n";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber && firstNumber > thirdNumber)
		std::cout << firstNumber << " jest najwieksza";
	else
		if (secondNumber > firstNumber && secondNumber > thirdNumber)
			std::cout << secondNumber << " jest najwieksza";
		else
			std::cout << thirdNumber << " jest najwieksza";
}

/*
Napisza funkcjê która wczyta 2 liczby i wyœwietli je w kolejnoœci rosn¹cej
*/
void task8()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj Pierwsza liczbe \n";
	std::cin >> firstNumber;
	std::cout << "Podaj Druga liczbe \n";
	std::cin >> secondNumber;

	if (firstNumber >= secondNumber)
		std::cout << secondNumber << "\t" << firstNumber;
	else
		std::cout << firstNumber <<"\t" << secondNumber;
}

/*
to samo co 8task tylko liczby 3 
*/
void task9()
{
	int firstNumber1, secondNumber2 , thirdNumber3;

	std::cout << "Podaj Pierwsza liczbe \n";
	std::cin >> firstNumber1;
	std::cout << "Podaj Druga liczbe \n";
	std::cin >> secondNumber2;
	std::cout << "Podaj trzecia liczbe \n";
	std::cin >> thirdNumber3;

	if (firstNumber1 >= secondNumber2 && secondNumber2 >= thirdNumber3)
		std::cout << thirdNumber3 << secondNumber2 <<  firstNumber1;
	else if (firstNumber1 >= thirdNumber3 && thirdNumber3 >= secondNumber2)
			std::cout << secondNumber2 << thirdNumber3 <<  firstNumber1;
	else if (secondNumber2 >= firstNumber1 && firstNumber1 >= thirdNumber3)
			std::cout << thirdNumber3 << firstNumber1 << secondNumber2;
	else if (secondNumber2 >= thirdNumber3 &&  thirdNumber3 >= firstNumber1)
			std::cout << firstNumber1 << thirdNumber3 <<  secondNumber2;
	else if (thirdNumber3 >= firstNumber1 && firstNumber1 >= secondNumber2)
			std::cout << secondNumber2 << firstNumber1 <<  thirdNumber3;
	else if(thirdNumber3 >= secondNumber2 && secondNumber2 >= firstNumber1)
			std::cout << firstNumber1 << secondNumber2 << thirdNumber3;
}

int main()
{
	//task1();	
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task9();
}