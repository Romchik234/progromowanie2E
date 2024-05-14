#include <iostream>
using namespace std;

/*zadanie 1*/
class Licz {
private:  int number;
public:
	Licz() {
		number = 0;
	}

	Licz(int a) {
		number = a;
	}

	void dodaj(int a)
	{
		number += a;
	}

	void odejmi(int a)
	{

		number -= a;
	}


};

void zadanie1()
{
	Licz a;
	Licz b(2);

	a.odejmi(1);
	b.dodaj(3);

};

//zadanie2
class Sumator {
private:
	const int SIZE = 10;
	int table[10];
	int sume = 0;
public:
	Sumator() {
		for (int i = 0; i < 10; i++)
		{
			table[i] = 0;
		}
	}


	Sumator(int a) {
		for (int i = 0; i < 10; i++)
		{
			table[i] = rand() % 10 + 1;
		}
	}

	void Sume() {
		for (int i = 0; i < 10; i++)
		{
			sume += table[i];
		}
		cout << "Suma: " << sume << "\n";
		sume = 0;
	}

	void SumePodzielne3()
	{

		for (int i = 0; i < 10; i++)
		{
			if (table[i] % 3 == 0)
			{
				sume += table[i];
			}
		}
		std::cout << "Suma liczb podzielnych przez 3 : " << sume << "\n";
		sume = 0;
	}

	void WyswietlenieLiczb() {
		for (int i = 0; i < 10; i++)
		{
			cout << table[i] << "\n";
		}
	}

	void ZakresLiczb(int max, int min)
	{
		if (max <= 9 && min >= 0)
		{
			cout << "Liczby z zakresu: \n";
			for (int i = min; i <= max; i++)
			{
				cout << table[i] << " ; ";
			}

		}
		else
			std::cout << "Zle podany zakres!\n";
	}
};

void zadanie2()
{
	Sumator a(1);

	a.WyswietlenieLiczb();
	a.Sume();
	a.SumePodzielne3();
	a.ZakresLiczb(9, 5);

}


//zadanie3

class Osoba {
private:
	string name;
	string nazwisko;
	int age;
public:
	Osoba() {
		name = "Pawel";
		nazwisko = "Waldon";
		age = 18;
	}

	void ShowInfo() {
		cout << name;
		cout << nazwisko;
		cout << age;
	}
};



int main()
{
	srand(time(NULL));
	/// zadanie1();
	zadanie2();


}
