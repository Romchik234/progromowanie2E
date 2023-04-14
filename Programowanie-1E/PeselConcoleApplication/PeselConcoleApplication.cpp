#include <iostream>

/* *DRY - dont repit yourself 
   *KISS - Keep it simple, stupid 
   *SOLID - S: single responsibility l
*/

int convertCharsToInt(char firstChar, char secondChar)
{
	return (firstChar - 48) * 10 + (secondChar - 48) * 1;
}

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

bool cheackPeselALLDigits(std::string stringPesel, std::string& errorMassage)
{
	//tylko cyfry 

	for (int i = 0; i < 11; i++)
	{
		if (stringPesel[i] < '0'
			|| stringPesel[i] > '9')
		{
			errorMassage = "Pesel musi zawierac tylko cyfry";
			return false;
		}
	} 
	return true;
}

bool cheackPeselMonth(std::string stringPesel, std::string& errorMassage)
{
	/*
	1900-1999  1-12 +0
	2000-2099 21-32	+20
	2100-2199 41-52	+40
	2200-2299 61-72	+60
	1800-1899 81-92	+80

	stringPesel[2] stringPesel[3]
	*/

	/*//Wersja 1
	if (stringPesel[2] == '0' && stringPesel[3] >= '1' && stringPesel[3] <= '9')//01-09
		return true;
	if (stringPesel[2] == '1' && stringPesel[3] >= '0' && stringPesel[3] <= '2')//10-12
		return true; 
	if (stringPesel[2] == '3' && stringPesel[3] >= '1' && stringPesel[3] <= '9')//21-29
		return true;
	if (stringPesel[2] == '4' && stringPesel[3] >= '0' && stringPesel[3] <= '2')//30-32
		return true;
	if (stringPesel[2] == '5' && stringPesel[3] >= '1' && stringPesel[3] <= '9')//41-49
		return true;
	if (stringPesel[2] == '6' && stringPesel[3] >= '0' && stringPesel[3] <= '2')//50-52
		return true;
	if (stringPesel[2] == '7' && stringPesel[3] >= '1' && stringPesel[3] <= '9')//61-69
		return true;
	if (stringPesel[2] == '8' && stringPesel[3] >= '0' && stringPesel[3] <= '2')//70-72
		return true;
	if (stringPesel[2] == '9' && stringPesel[3] >= '1' && stringPesel[3] <= '9') // oj akldakd  kadkakosdgkjasldkfkasgikjasdfkasjdfakdsfjdfjgkad  kdf d fkm;as nnkasmasdfjmc m
		return true;
	//powtarzamy tą funkcję dla kolejnych liczb */

	//wersja 2 
	/*for (int i = 0; i < 10; i = i + 2)
	{

		if (stringPesel[2] == i && stringPesel[3] >= '1' && stringPesel[3] <= '9')
			return true;
		if (stringPesel[2] == i+1 && stringPesel[3] >= '0' && stringPesel[3] <= '2')
			return true;
	}*/ 

	//wersja 3 
	/*int month = (stringPesel[2] - 48) * 10 + (stringPesel[3] - 48) * 1;

	if (month >= 1 && month <= 12)
		return true; 
	if (month >= 21 && month <= 32)
		return true; 
	if (month >= 41 && month <= 52)
		return true;
	if (month >= 61 && month <= 72)
		return true;
	if (month >= 81 && month <= 92)
		return true;*/
	
	//wersja 4
	int monthV4 = convertCharsToInt(stringPesel[2], stringPesel[3]);
	monthV4 = monthV4 % 20; 
	if (monthV4 >= 1 && monthV4 <= 12)
		return true;

	errorMassage ="Miesiac w numereze Pesel jest nie poprawny";
	return false; 
}


bool cheackDay(std::string stringPesel, std::string& errorMassage)
{
	int day = convertCharsToInt(stringPesel[4], stringPesel[5]);
	int month = convertCharsToInt(stringPesel[2], stringPesel[4]);
	int year= convertCharsToInt(stringPesel[0], stringPesel[1]);
	
	errorMassage = "Dzien jest niepoprawny";

	if (day < 1 || day > 31)
		return false; 

	if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
		return false; 
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 = 0;

	if (month == 2 && day == 29 && !isLeapYear) //isLeapYear == false
		return false;

	errorMassage = "";
	return true; 
}


bool cheackPesel(std::string stringPesel, std::string& errorMassage)
{

	if (cheackPeselLenght(stringPesel, errorMassage) == false)
		return false; 


	if (cheackPeselALLDigits(stringPesel, errorMassage) == false)
		return false;

	if (cheackPeselMonth(stringPesel, errorMassage) == false)
		return false;
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