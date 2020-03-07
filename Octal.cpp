#include "Octal.hpp"
#include <string>
#include <cmath>
using namespace std;

Octal::Octal(string numero) : Numero(numero) {
}

string Octal::toString() {
  return numero;
}

int Octal::toInt() {
  int decimal;
  int i = 0;
  long oct = stol(numero.substr(2, numero.length() - 1));
  while(oct != 0) {
    decimal = decimal + ((oct%10) * pow(8, i));
    oct /= 10;
    i++;
  }
  return 0; //falta de que u
}
