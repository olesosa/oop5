#include<iostream>

using namespace std;

class Base
{
	virtual int GetFigureV() { int v = 0; return v; };

	virtual void Print() { cout << "info"; };

};

class Paral : public Base
{
private:

	int a, b, c;

public:

	Paral(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	int GetFigureV() override
	{
		int v = a * b * c;
		return v;
	}

	void Print() override
	{
		cout << "Paral info: \n" << a << " " << b << " " << c << "\nParal V: \n" << GetFigureV() << endl << endl;
	}

};

class Piramid : public Base
{
private:

	int a, b, h;

public:

	Piramid(int a, int b, int h)
	{
		this->a = a;
		this->b = b;
		this->h = h;
	}

	Piramid(int a)
	{
		this->a = a;
		b = a;
		h = (a * sqrt(6))*3;
	}

	int GetFigureV() override
	{
		if (h != (a * sqrt(6)) * 3)
		{
			int v = (a * b * h) / 3;
			return v;
		}
		else
		{
			int v = pow(a, 3)*sqrt(2);
			return v;
		}
	}

	void Print() override
	{
		cout << "Piramid info: \n" << a << " " << b << " " << h << "\nPiramid V: \n" << GetFigureV() << endl << endl;
	}

};

class Sphere : public Base
{
private:

	int r;

public:

	Sphere(int r)
	{
		this->r = r;
	}

	int GetFigureV() override
	{
		float pi = 3.14;
		int v = 4 / 3 * pi * pow(r, 3);
		return v;
	}

	void Print() override
	{
		cout << "Sphere info: \n" << r << "\nSphere V: \n" << GetFigureV() << endl << endl;
	}

};

int main()
{

	Paral one(1, 2, 3);
	one.GetFigureV();
	one.Print();

	Piramid two(1, 2, 3);
	two.GetFigureV();
	two.Print();

	Piramid three(2);
	three.GetFigureV();
	three.Print();

	Sphere four(3);
	four.GetFigureV();
	four.Print();

	system("pause");
	return 0;
}