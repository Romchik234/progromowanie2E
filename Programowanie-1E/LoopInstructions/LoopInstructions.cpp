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

	endNumber++;
	do
	{
		std::cout << currentNumber << "\n";						//cntrl+ H + D	(cntrl h) 

		currentNumber++;
	} while (currentNumber != endNumber); //jezeli warunek spewniony to powturzy 
}

/*
zgadnij liczbe, zgadywanka 
*/
void task4()
{
	int randomNumber , findNumber;

	srand(time(NULL)); 

	/*
	<1;100>
	<0;99>


	<a; b>		a <= b

	<0; b-a>

	rand() % (b - a + 1) + a;    <--ogólny wzór  
	*/ 

	//od 1 do 100 <1;100>
	randomNumber = rand() % 1000 + 1 ;

	//std::cout << "Wylosowana liczba jest\n " << randomNumber; 
	std::cout << "Zgadnij liczbê od 1 do 1000 \n";
	
	do
	{
		std::cin >> findNumber;
		if (findNumber > randomNumber)
			std::cout << "Liczba za du¿a\n";
		if (findNumber < randomNumber)
			std::cout << "liczba za ma³a\n";
	}
	while (findNumber != randomNumber);
	std::cout << " tak, to liczba=" << randomNumber;
}

void task9120()
{
	int one;

	one = 1;

	do
	{
		std::cout << one;
		one = one * 110;
	} while (one != 1);

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	task4();
	//task9120();
}