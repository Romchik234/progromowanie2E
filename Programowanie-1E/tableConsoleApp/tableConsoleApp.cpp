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

	srand(time(NULL));
	for (int i = 0;  i < size;  i++)
	{
		tabOfNumbers[i] = rand(;
	}
	std::cout << "Liczby w tablice :"; 
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << "\n"; 
	}
}

int main()
{
	//task1();
	task2();
}