#pragma once
#include <string>
#include <iostream>

using namespace std;

class Numero {
  protected:
    string numero;
  public:
    Numero(string);
    virtual string toString() = 0;
};
