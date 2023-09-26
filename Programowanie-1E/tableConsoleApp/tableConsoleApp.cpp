#include <iostream>

void task1()
{
	int a1, a2, a3; 
	int tab[3]; 

	for (int i = 0; i < 3; i++)
	{
		std::cin >> tab[i]; 
	}
}

void task2()
{
	const int size = 10;
	int tabOfNumbers[size];
	int smaller = 9999;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 1000;
		if (tabOfNumbers[i] < smaller)
			smaller = tabOfNumbers[i];
	}
	std::cout << "najmniejsza liczba to:" << smaller << "\n";
	std::cout << "Liczby w tablice : \n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << "\n";
	}
}

void zadanieoue()
{
	const int tableSize = 3;
	int tab[tableSize]; 
	float avarageOfNumber; 
	float sumeOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % 10; 
		sumeOfNumbers = sumeOfNumbers + tab[i]; 
	}
 
	avarageOfNumber = sumeOfNumbers / tableSize; 
	
	for (int i = 0; i  < tableSize; i ++)
	{
		std::cout << tab[i] << ", ";
	}
	std::cout << "\n" << "srednia = " << avarageOfNumber; 
}

int main()
{
	//task1();
	//task2();
	zadanieoue();
}