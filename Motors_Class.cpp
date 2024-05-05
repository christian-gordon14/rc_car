#include <iostream>
using namespace std;

class Motors {
  public:
  int positivePin;
  int negativePin;
  bool positiveValue;
  bool negativeValue;
  void writingMotor(int positivePin, bool positiveValue, int negativePin, bool negativeValue){
    digitalWrite(positivePin,positiveValue);
    digitalWrite(negativePin,negativeValue);
  }

};

int main(){
  Motors Motor1;
  Motor1.positivePin = 2;
  Motor1.negativePin = 3;
  Motor1.positiveValue = LOW;
  Motor1.negativeValue = LOW;

  Motors Motor2;
  Motor2.positivePin = 10;
  Motor2.negativePin = 9;

  Motors Motor3;
  Motor3.positivePin = 5;
  Motor3.negativePin = 6;

  Motors Motor4;
  Motor4.positivePin = 22;
  Motor4.negativePin = 24;
}