#pragma once
#include <string>
#include "Numero.hpp"
using namespace std;

class Octal : public Numero {
  public:
    Octal(string);
    Numero operator+ (Numero x);
    string toString();
    int toInt();
};
