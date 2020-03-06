#pragma once
#include <string>
#include "Numero.hpp"
using namespace std;

class Hexa : public Numero {
  public:
    Hexa(string);
    string toString();
};
