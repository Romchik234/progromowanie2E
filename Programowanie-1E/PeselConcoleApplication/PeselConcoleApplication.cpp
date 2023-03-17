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


}

int main()
{
	 std::string stringPesel = getpesel(); 

	 if (cheackPesel(stringPesel) == true)
	 {
		 
	 }
	 else
	 {

	 }
	//walidacja poprawnosci numeru pesel 


	//wyciagniecie dannych 


}