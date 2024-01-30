#include <iostream>
using namespace std;

class person				//klasa
{
private:
	string name;			//pole
	//string secondName;
	string surname;
	short age;
	//short height;
	//char sex; // M - male | F - female
public:
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

	void SetAge(short a)
	{
		if (a > 0 && a < 130)
			age = a;
		else
			cout << "B³êdna wartoœæ\n";

	}
};


int main()
{
	person firstPerson;				//objekt

	//firstPerson.name = "Jan";
	//.surname = "Kowalski";
	//firstPerson.age = 5;
	firstPerson.SetAge(5000);

	firstPerson.showInfo();

	if (firstPerson.isLegalAge())
		cout << "Pewnoletni\n";

	person secondPerson;

	//secondPerson.name = "Bartek";
	//secondPerson.surname = "Nawak";
	//secondPerson.age = 56;
	secondPerson.showInfo();

	if (secondPerson.isLegalAge())
		cout << "Pewnoletni\n";


}