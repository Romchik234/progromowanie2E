// FirstObjectTaskConsoleApplication.cpp 
#include <iostream>
using namespace std;

/*
Zdefiniuj klase opisuj�cy punkt na przestrzeni kartezja�skiej. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra zw�rci odleg�o�� tego punktu od poczatku uk�adu wsp�rzednych
* metoda kt�ra zwr�ci odleg�o�� od innego punktu
* metoda kt�ra zwr�ci informacj� w kt�rej �wiartce uk�adu wsp�rzednych si� znajduje punkt
* metod� kt�ra poka�e informacje o punkcie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.

*/

/*
Zdefiniuj klase opisuj�ce konto bankowe. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra dokona wp�aty na konto
* metoda kt�ra wyp�aty z konta
* metoda kt�ra wykona przelew na inne konto
* metod� kt�ra poka�e informacje o koncie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.
*/

class Point
{
private:
	string name;
	float xLine;
	float yLine;
	short quarter;
public:
	Point()
	{
		name = "A";
		xLine = 0;
		yLine = 0;
		quarter = 0;
	}

	Point(string name, float x, float y, short quarter)
	{
		name = name;
		xLine = x;
		yLine = y;
		this->quarter = quarter;
	}

	void DeclarationPoint()
	{
		cout << "Podaj nazwe punktu: \n";
		cin >> name;
		cout << "Podaj wspolrzedne x: \n";
		cin >> xLine;
		cout << "Podaj wspolrzedne y: \n";
		cin >> yLine;
		quarter = FindQuarter(xLine, yLine);
	}

	short FindQuarter(float xLine, float yLine)
	{
		if (xLine > 0 && yLine > 0)
			return 1;
		if (xLine > 0 && yLine < 0)
			return 4;
		if (xLine < 0 && yLine > 0)
			return 2;
		if (xLine < 0 && yLine < 0)
			return 3;
		else
			return 0;
	}

	void ShowInfoofPoint()
	{
		cout << "\n----------------------------\n";
		cout << "imie punktu: " << name << " \n";
		cout << "wspo�rzednde x: " << xLine << " \n";
		cout << "wspo�rzednde y: " << yLine << " \n";
		cout << "czwartka : " << quarter << " \n";
		cout << "odleglosc od poczatku: " << sqrt(xLine * xLine + yLine * yLine) << " \n\n";

	}

	void DistanceBetweenPoints(Point firstPoint)
	{
		cout << "Odleglosc pomiedzy punktami :  " << sqrt((xLine - firstPoint.xLine) * (xLine - firstPoint.xLine) + (yLine - firstPoint.yLine) * (yLine - firstPoint.yLine)) << " \n";
	}
};
void task1()
{
	Point firstPoint;
	Point secondPoint;
	Point thirdPoint("Opa", 3, 4, 1);

	firstPoint.DeclarationPoint();
	firstPoint.ShowInfoofPoint();



	secondPoint.DeclarationPoint();
	secondPoint.ShowInfoofPoint();
	secondPoint.DistanceBetweenPoints(firstPoint);

	cout << "\n" << "----------------\n";
	thirdPoint.ShowInfoofPoint();
}

class Account
{
private:
	string login;
	string password;
	float balance;
	string pin;

public:
	Account()
	{
		login = "123456789";
		password = "OPACZA";
		balance = 0.00;
		pin = "0000";
	}

	Account(string userLogin, string userPassword, float userBalance, string userPin)
	{
		login = userLogin;
		password = userPassword;
		balance = userBalance;
		pin = userPin;
	}

	void InfoOfAccount()
	{
		cout << "Informacja o koncie: \n";

		cout << "Login: " << login << " \n";
		cout << "Has�o: " << password << " \n";
		cout << "Saldo: " << balance << " \n";
		cout << "PIN: " << pin << " \n";

	}

	bool CheckUser()
	{
		string loginFromUser;
		string passwordFromUser;

		cout << "Podaj login:\n";
		cin >> loginFromUser;
		cout << "Podaj haslo:\n";
		cin >> passwordFromUser;

		if (loginFromUser == login && passwordFromUser == password)
			return true;
		else
			return false;
	}

	void AddMoney(float deposite)
	{
		balance += deposite;
		cout << "Wplata na konto w rozmiarze " << deposite << " wykonano!\n";
		cout << "Aktualny stan konta = " << balance << " \n";
	}

	string GetPin()
	{
		return pin;
	}

	void PayOut(float amout)
	{
		if (CheckPin()) {


			balance -= amout;
			cout << "Wyplata  o  " << amout << " zlotych udana!\n";
			cout << "Aktualny stan konta = " << balance << " \n";
		}
	}

	void Transfer(Account& secondUser, float transferAmount)
	{
		PayOut(transferAmount);
		secondUser.AddMoney(transferAmount);

		cout << "Przelew wykonano!\n";
		cout << "Aktualny stan twego konta to =  " << balance << "\n";
		cout << "Stan twego konta odbiorcy teraz  =  " << secondUser.balance << "\n";

	}

	bool CheckPin()
	{
		cout << "Podaj pin: \n";

		string userPin;
		if (userPin == pin)
			return true;
		else
		{
			cout << "Podales zly pin!\n";
			return false;
		}
	}
};


void task2()
{
	cout << " Konto Bankowe $$$\n";

	Account user1("1234", "4321", 100.00, "0000");
	Account user2;

	if (user1.CheckUser())
		user1.InfoOfAccount();
	else
		cout << "Zle haslo lub login!\n";


	user1.AddMoney(-15.5);

	user1.PayOut(100000.0);

	user1.InfoOfAccount();
	user2.InfoOfAccount();

	user1.Transfer(user2, -20);

	user1.InfoOfAccount();
	user2.InfoOfAccount();

}


int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	task2();


}