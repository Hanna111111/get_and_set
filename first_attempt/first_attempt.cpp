#include <iostream>
#include <string>
using namespace std;

class Point
{

private:

  int x;
  int y;


public:

  void Setx (int valueX)
  {
    x = valueX;
  }
  
  void Sety (int valueY)
  {
    y = valueY * 2;
  }
  
  int Getx ()
  {
    return x;
  }
  
  int Gety ()
  {
    return x;
  }

  void Print ()
  {
    cout << "x = " << x << " y = " << y << endl << endl;
  }
};

  int main ()
  {
    Point a;
    a.Setx(11);
    a.Sety(5);
    a.Print();
    //int result = a.Getx();
    //cout << result << endl;

    return 0;
  }
