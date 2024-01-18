#include <iostream>
using namespace std;

struct person
{
	string name;
	//string secondName;
	string surname;
	short age;
	//short height;
	//char sex; // M - male | F - female 
};


int main()
{
	person firstPerson;
	firstPerson.name = "Jan";
	firstPerson.surname = "Kowalski";
	firstPerson.age = 5;

	cout << " Info o osoie : \n";
	cout << "Imie : " << firstPerson.name << "\n";
	cout << "Nazwisko : " << firstPerson.surname << "\n";
	cout << "Wiek : " << firstPerson.age << "\n";
}