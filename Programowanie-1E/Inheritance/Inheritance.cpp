#include <iostream>
using namespace std;

class C
{
private:
protected: 
	int number;

public: 
	
};


class A :  public C{
private:
	//int number;
	bool isEmpty;
public:

	A()
	{
		number = 5;
		isEmpty = false;
	}

	int GetNumber()
	{
		return number;

	}

	void ShowInfo()
	{
		cout << "Informacja o objekcie A: \n";
		cout << "Number " << number << "\n";
		cout << "bool  " << isEmpty << "\n";
	}
};


class B : public C  {
private:
	//int number;
	string text;
public:

	B()
	{
		number = 5;
		text = "ADNSJDNJ";
	}

	int GetNumber()
	{
		return number;

	}

	void ShowInfo()
	{
		cout << "Informacja o objekcie A: \n";
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



}

