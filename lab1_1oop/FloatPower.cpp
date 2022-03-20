//FloatPower.cpp
#include <iostream>
#include <cmath>
#include "FloatPower.hpp"

using namespace std;

void FloatPower::SetFirst(float value){
  first = value;
}

void FloatPower::SetSecond(float value){
  second = value;
}


bool FloatPower::Init(float x, float y) {
    if(x != 0){
        first = x;
        second = y;
        return true;
    }
    else
        return false;
}

void FloatPower::Display() const {
    cout << "number " << first << " to power " << second << endl;
}

void FloatPower::Read()
{
  int x, y;
  do {
    cout << "number =  ";
    cin >> x;
    cout << "power = ";
    cin >> y;
    } while (!Init(x, y));
}

void FloatPower::power(){
   pow(first,second);
}

void FloatPower::DisplayResult() {
    cout << "Result = " << pow(first,second) << endl;
}






