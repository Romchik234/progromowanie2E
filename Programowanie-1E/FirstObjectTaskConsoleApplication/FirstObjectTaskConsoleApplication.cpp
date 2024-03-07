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

class point
{
private:
	string name;
	float xLine;
	float yLine;
	short quarter;
public:
	point()
	{
		name = "A";
		xLine = 0;
		yLine = 0;
		quarter = 0;
	}

	point(string name, float x, float y, short quarter)
	{
		name = name; 
		xLine = x;
		yLine = y; 
		quarter = quarter; 
   	}

	void declarationPoint()
	{
		cout << "Podaj nazwe punktu: \n";
		cin >> name;
		cout << "Podaj wspolrzedne x: \n";
		cin >> xLine;
		cout << "Podaj wspolrzedne y: \n";
		cin >> yLine;
		quarter = findQuarter(xLine, yLine);
	}

	short findQuarter(float xLine, float yLine)
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

	void showInfoofPoint()
	{
		cout << "\n----------------------------\n";
		cout << "imie punktu: " << name << " \n";
		cout << "wspo�rzednde x: " << xLine << " \n";
		cout << "wspo�rzednde y: " << yLine << " \n";
		cout << "czwartka : " << quarter << " \n";
		cout << "odleglosc od poczatku: " << sqrt(xLine * xLine + yLine * yLine) << " \n\n";

	}

	void distanceBetweenPoints(point firstPoint)
	{
		cout << "Odleglosc pomiedzy punktami :  " << sqrt((xLine - firstPoint.xLine) * (xLine - firstPoint.xLine) + (yLine - firstPoint.yLine) * (yLine - firstPoint.yLine)) << " \n";
	}
};
void task1()
{
	point firstPoint;
	point secondPoint;
	point thirdPoint("Opa", 3, 4, 1);

	firstPoint.declarationPoint();
	firstPoint.showInfoofPoint();



	secondPoint.declarationPoint();
	secondPoint.showInfoofPoint();
	secondPoint.distanceBetweenPoints(firstPoint);

	cout << "\n" << "----------------\n";
	thirdPoint.showInfoofPoint();
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
	


}