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
/*
* Napisz funkcjê, która dla kolekcji danych liczbowych znajdzie najd³u¿szy rosn¹cy podci¹g.								task6
* Napisz funkcjê, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych. task 7
*/


//*Napisz funkcjê, która dla kolekcji danych liczbowych policzy ile jest liczb wiêkszych od œredniej arytmetycznej.task3

void task3()
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
		std::cout << tab[i] << ", ";
	}
	avarageOfNumber = sumeOfNumbers / tableSize;

	std::cout << "\n" << "srednia = " << avarageOfNumber;

	int numbersBiggerThenAvarage =0;

	for (int i = 0;  i < tableSize;  i++)
	{
		if ( tab[i] > avarageOfNumber)
		{
			numbersBiggerThenAvarage++;
		}
	}

	std::cout << "\n" << "Liczb wiekszych od sredniej = " << numbersBiggerThenAvarage;
}

 
// *Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejnoœci.task4

void task4()
{
	const int tableSize = 3;
	int tab[tableSize];
	int secondTab[tableSize];

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % 10;
		std::cout << tab[i] << ", ";
	}
	std::cout << " \n";

	for (int i = 0, j = tableSize - 1; i < tableSize; i++, j--)
	{
		secondTab[j]= tab[i];
	}

	for (int i = 0; i < tableSize; i++)
	{
		std::cout << secondTab[i] << ", "; 
	}
}

//*Napisz funkcje, która dla kolekcji danych liczbowych obliczy czêstotliwoœæ wystêpowania danej liczby.task5
//nie dokoncz
void task5()
{
	const int bottomRange =  -11;
	const int upperRange = 20;
	const int tableSize = upperRange +1 ;
	int tab[tableSize];
	int intervalOfNumber[tableSize];


	for (int i = 0; i < tableSize; i++)
	{
		intervalOfNumber[i] = 0; 
	}
	
	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % (upperRange - bottomRange + 1) + bottomRange;
		std::cout << tab[i] << ", ";
	}

	for (int i = 0; i < tableSize; i++)
	{
		intervalOfNumber[tab[i]] = intervalOfNumber[tab[i]] + 1;
	}

	std::cout << "\n";

	for (int i = 0; i < tableSize; i++)
	{
		std::cout << "czestotliwosc liczby " << i  << " jest:  " << intervalOfNumber[i] << "\n";
	}
	
}

int main()
{
	//task1();
	//task2();
	//zadanieoue();
	//task3();
	//task4();
	task5(); 
}