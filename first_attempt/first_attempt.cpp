#include <iostream>
#include <string>
using namespace std;

class Point
{

private:

  int x;
  int y;


public:
  int Getx ()
  {
    return x;
  }

  void Setx (int x)
  {
    x = x;
  }

  void Print ()
  {
    cout << "x = " << x << "t/ y = " << y << endl << endl;
  }



int main()
{
  Point a;
  a.Print();

  return 0;
}
