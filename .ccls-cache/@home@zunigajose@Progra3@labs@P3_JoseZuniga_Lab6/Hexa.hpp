#pragma once
#include <string>
#include "Numero.hpp"
using namespace std;

class Hexa : public Numero {
  public:
    Hexa(string);
    Numero operator+ (Numero x);
    Numero operator- (Numero x);
    string toString();
    int toInt();
};
