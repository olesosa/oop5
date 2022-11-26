#include<iostream>

using namespace std;

class Base
{

 virtual int FigureV() = 0;

 virtual void Print() = 0;

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

 int FigureV() override
 {
  int v = a * b * c;
  return v;
 }

 void Print() override
 {
  cout << "Paral info: \n" << a << " " << b << " " << c << "\nParal V: \n" << FigureV() << endl << endl;
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

 int FigureV() override
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
  cout << "Piramid info: \n" << a << " " << b << " " << h << "\nPiramid V: \n" << FigureV() << endl << endl;
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

 int FigureV() override
 {
  float pi = 3.14;
  int v = 4 / 3 * pi * pow(r, 3);
  return v;
 }

 void Print() override
 {
  cout << "Sphere info: \n" << r << "\nSphere V: \n" << FigureV() << endl << endl;
 }


};

int main()
{

 Paral one(1, 2, 3);
 one.FigureV();
 one.Print();

 Piramid two(1, 2, 3);
 two.FigureV();
 two.Print();

 Piramid three(2);
 three.FigureV();
 three.Print();

 Sphere four(3);
 four.FigureV();
 four.Print();

 system("pause");
 return 0;
}
