#include <iostream>

/* *DRY - dont repit yourself 
   *KISS - Keep it simple, stupid 
   *SOLID - S: single responsibility l
*/

std::string getpesel()
{
	std::string stringPesel;
	std::cout << "podaj pesel:\n";
	std::cin >> stringPesel; 
	return stringPesel;
}

bool cheackPesel(std::string stringPesel)
{
	//dlugosc znakow (11)
	if (stringPesel.length() != 11)
		return false; 
	//tylko cyfry 
	for (int i = 0; i < 11; i++)
	{
		if (stringPesel[i] < '0'
			|| stringPesel[i] > '9')
		{
			return false ; 
		}
	}
	//poprawność miesiąca 
	//poprawność dnia 
	//poprawność cyfry kontrlonej 
	return true; 
}

int main()
{
	 std::string stringPesel = getpesel(); 

	 if (cheackPesel(stringPesel) == true)
	 {
		 std::cout << "Pesel jest poprawny\n";
	 }
	 else
	 {

	 }
	//walidacja poprawnosci numeru pesel 


	//wyciagniecie dannych 


}