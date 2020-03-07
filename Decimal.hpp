#pragma once
#include "Numero.hpp"
#include <string>

using namespace std;

class Decimal : public Numero {
  public:
    Decimal(string);
    Numero operator+ (Numero x);
    Numero operator- (Numero x);
    Numero operator* (Numero x);
    string toString();
    int toInt();
};
