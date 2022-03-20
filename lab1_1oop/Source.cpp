//Source.cpp
#include <iostream>
#include "FloatPower.hpp"

using namespace std;

FloatPower makeFloatPower(float x, float y)
{
    FloatPower nn;
    if (!nn.Init(x, y))
      cout << "wrong argument to Init (first)" << endl;
    return nn;
}

int main(){
  cout << "Object a:" << endl;
  FloatPower a;
  a.SetFirst(5);
  a.SetSecond(3);
  a.Display();
  a.power();
  a.DisplayResult();
  cout << endl;
  cout << "Object b:" << endl;
  FloatPower b;
  b.Read();
  b.Display();
  b.power();
  b.DisplayResult();
  cout << endl;
  cout << "Object c:" << endl;
  FloatPower c;
  c = makeFloatPower(3,4);
  c.Display();
  c.power();
  c.DisplayResult();


  return 0;
}
