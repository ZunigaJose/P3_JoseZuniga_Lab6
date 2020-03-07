#include "Octal.hpp"
#include <string>
#include <cmath>
using namespace std;

Octal::Octal(string numero) : Numero(numero) {
}

string Octal::toString() {
  return numero;
}

Numero Numero::operator+ (Numero x) {
  int n1 = toInt();
  int suma = n1 + x.toInt();
  cout << "Suma:\n";
  cout << "Bin: " << x.Bin(suma) << endl;
  cout << "Hexa: "<< x.Hex(suma) << endl;
  cout << "Octal: "<< x.Oct(suma) << endl;
  cout << "Decimal: " << suma << endl;
  return (Numero)(Octal(to_string(suma)));
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
  return decimal;
}
