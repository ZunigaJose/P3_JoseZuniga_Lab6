#pragma once
#include <string>
#include <iostream>

using namespace std;

class Numero {
  protected:
    string numero;
  public:
    Numero(string);
    virtual string toString() {return "";}
    virtual int toInt() {return 0; }
    string Bin(int);
    string Oct(int);
    string Hex(int);
};
