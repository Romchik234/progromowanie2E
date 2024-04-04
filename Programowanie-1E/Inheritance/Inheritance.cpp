#include <iostream>
using namespace std;

class C
{
private:
protected:
	int number;
	string name; 

public:
	int GetNumber()
	{
		return number;
	}
};


class A : public C {
private:
	//int number;
	bool isEmpty;
public:

	A()
	{
		number = 5;
		isEmpty = false;
		name = "A";
	}

	/*int GetNumber()
	{
		return number;
	}*/

	void ShowInfo()
	{
		cout << "Informacja o objekcie " << name << " : \n";
		cout << "Number " << number << "\n";
		cout << "bool  " << isEmpty << "\n";
	}
};


class B : public C {
private:
	//int number;
	string text;
public:

	B()
	{
		name = "B";
		number = 5;
		text = "ADNSJDNJ";
	}

	/*int GetNumber()
	{
		return number;

	}*/

	void ShowInfo()
	{
		cout << "Informacja o objekcie " << name << ": \n";
		cout << "Number " << number << "\n";
		cout << "Text" << text << "\n";
	}
};



int main()
{

	A a;
	a.ShowInfo();
	B b;
	b.ShowInfo();

	C c;
	c.GetNumber();

}

