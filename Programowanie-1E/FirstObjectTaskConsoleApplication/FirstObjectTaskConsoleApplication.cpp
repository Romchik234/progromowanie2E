// FirstObjectTaskConsoleApplication.cpp 
#include <iostream>
using namespace std;


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

	void showInfo()
	{
		cout << "Name of point:  " << name; 
		cout << "wspo³rzêdne x= " << xLine << "  y= " << yLine; 
		quarter = getQuarter(xLine,yLine);
	}

	short getQuarter(float x,float  y)
	{
		if (x > 0 && y > 0)
			return 1;
		if (x > 0 && y < 0)
			return 4;
		if (x < 0 && y < 0)
			return 3;
		else
			return 2;
	}
};

void menu()
{
	system("cls");
	std::cout << "Uk³ad Wspó³rzêdnych \n";
	cout << "1.Informacja o punktach\n";
	cout << "2.Nowy punkt\n";
	cout << "3.liczenie pomiêdzy punktów\n";
	cout << "0.Koniec programu\n";

}

int getOption()
{
	cout << " Wybierz opcjê: \n";
	int option;
	cin >> option;
	return option;
}



void makeNewPunkt()
{


}

void distanceCounting()
{



}


int main()
{
	setlocale(LC_CTYPE, "polish");

	point firstPoint;
	while (true)
	{
		menu();
		int schoosenOption = getOption();

		if (schoosenOption == 0)
			break;

		switch (schoosenOption)
		{
		case 1:
			firstPoint.showInfo();
			break;
		case 2: 
			makeNewPunkt();
			break;
		case 3:
			distanceCounting(); 
			break;
		}

	}





}


