#include "Numero.hpp"
#pragma once
#include <string>
using namespace std;

class Binarios : public Numero{
  public:
    Binarios(string);
    string toString();
    Numero operator+ (Numero);
    Numero operator- (Numero x);
    int toInt();
};
