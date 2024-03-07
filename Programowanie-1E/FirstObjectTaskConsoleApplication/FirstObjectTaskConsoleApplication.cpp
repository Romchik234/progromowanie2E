// FirstObjectTaskConsoleApplication.cpp 
#include <iostream>
using namespace std;

/*
Zdefiniuj klase opisuj¹cy punkt na przestrzeni kartezjañskiej. Mo¿liwoœci klasy:
* konstruktory
* metoda która zwórci odleg³oœæ tego punktu od poczatku uk³adu wspó³rzednych
* metoda która zwróci odleg³oœæ od innego punktu
* metoda która zwróci informacjê w której æwiartce uk³adu wspó³rzednych siê znajduje punkt
* metodê która poka¿e informacje o punkcie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.

*/

/*
Zdefiniuj klase opisuj¹ce konto bankowe. Mo¿liwoœci klasy:
* konstruktory
* metoda która dokona wp³aty na konto
* metoda która wyp³aty z konta
* metoda która wykona przelew na inne konto
* metodê która poka¿e informacje o koncie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
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
		cout << "wspo³rzednde x: " << xLine << " \n";
		cout << "wspo³rzednde y: " << yLine << " \n";
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