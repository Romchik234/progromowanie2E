#include <iostream>
using namespace std;

class person				//klasa
{
public:
	string name;			//pole
	//string secondName;
	string surname;
	short age;
	//short height;
	//char sex; // M - male | F - female
	
	void showInfo()			//metoda
	{
		cout << " Info o osoie : \n";
		cout << "Imie : " << name << "\n";
		cout << "Nazwisko : " << surname << "\n";
		cout << "Wiek : " << age << "\n";


	}

	bool isLegalAge()
	{
		return age >= 18;
	}

};


int main()
{
	person firstPerson;				//objekt

	firstPerson.name = "Jan";
	firstPerson.surname = "Kowalski";
	firstPerson.age = 5;
	firstPerson.showInfo();

	if (firstPerson.isLegalAge())
		cout << "Pewnoletni\n";

	person secondPerson;

	secondPerson.name = "Bartek";
	secondPerson.surname = "Nawak";
	secondPerson.age = 56;
	secondPerson.showInfo();
 
	if(secondPerson.isLegalAge())
		cout << "Pewnoletni\n";


}