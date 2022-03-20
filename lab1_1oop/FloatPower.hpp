//FloatPower.h
#pragma once

class FloatPower {
  private:
    float first;
    float second;
  public:
    float GetFirst() const { return first; };
    float GetSecond() const { return second; };
    void SetFirst(float value);
    void SetSecond(float value);

    bool Init(float x, float y);
    void Display() const;
    void DisplayResult();
    void Read();

    void power();
};
