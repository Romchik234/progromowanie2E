#include <iostream>
using namespace std;

class  Queadrangle{
protected:
	double sideA, sideB, sideC, sideD;
public:

	double perimeter()
	{
		return sideA + sideB + sideC + sideD; 
	}

	Queadrangle(double a, double b, double c, double d)
	{
		sideA = a;
		sideB = b;
		sideC = c;
		sideD = d; 
	}

};


class Square : public Queadrangle
{protected:


public:
	Square(double a):Queadrangle(a,a,a,a)
	{
		
	}


};

class Trapaze : public Queadrangle
{
protected:
	

public:

	Trapaze(double a, double b, double c, double d): Queadrangle(a,b,c,d)
	{

	}
};

class Rectangle: public Queadrangle 
{
protected:


public:
	Rectangle(double a, double b):Queadrangle(a,b,a,b)
	{
		/*sideA = sideC = a; 
		sideB = sideD = b; */
	}

	double GetArea() {
		return sideA * sideB; 
	}
};

int main()
{
	Rectangle r(2,3); 
	cout << "Obwód prostokatna = " << r.perimeter() << " \n"; 
	
	Trapaze t(1,2,3,4); 
	cout << "Obwód trapeza = " << t.perimeter() << " \n";

	Square s(5);	
	cout << "Obwód kwadratu = " << t.perimeter() << " \n";
}


