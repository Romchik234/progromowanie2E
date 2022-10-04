#include <iostream>
/*
napisz funkcjê która pobierze dwie liczby oraz wykona podstawowe operacje aretmetyczne
*/
void task1()
{
	int firstNumber, secondNumber; 
	std::cout << "Podaj liczbe pierwsza:" << "\n"; 
	std::cin >> firstNumber; 

	std::cout << "Podaj druga liczbe: \n"; 
	std::cin >> secondNumber; 

	//  suma,   ró¿nica, iloczyn,  iloraz , reszta dzielenia; 
	int sum, difference, product, quotient, rest; 
	
	sum = firstNumber + secondNumber; 
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber; 
	quotient = firstNumber / secondNumber; 
	rest = firstNumber % secondNumber; 

	std::cout << "Suma:" << sum << "\n";
	std::cout << "Roznica:" << difference << "\n";
	std::cout << "Iloczyn:" << product << "\n";
	std::cout << "Iloraz:" << quotient << "\n";
	std::cout << "reszta_z_dzielenia:" << rest << "\n";
}


int main()
{
 
	task1();




}

