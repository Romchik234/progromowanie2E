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

bool cheackPeselLenght(std::string stringPesel, std::string& errorMassage)
{
	//dlugosc znakow (11)
	if (stringPesel.length() != 11)
	{
		errorMassage = "Pelsel musi miec 11 znakow!";
		return false;
	}

	return true; 
}

bool cheackPesel(std::string stringPesel, std::string& errorMassage)
{
	if (cheackPeselLenght(stringPesel, errorMassage) == false)
		return false; 

	//tylko cyfry 
	for (int i = 0; i < 11; i++)
	{
		if (stringPesel[i] < '0'
			|| stringPesel[i] > '9')
		{
			errorMassage = "Pesel musi zawierac tylko cyfry"; 
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
	 std::string errorMassage;

	 if (cheackPesel(stringPesel, errorMassage) == true)
	 {
		 std::cout << "Pesel jest poprawny\n";
	 }
	 else
	 {
		 std::cout << errorMassage << "\n";
	 }
	//walidacja poprawnosci numeru pesel 


	//wyciagniecie dannych 


}