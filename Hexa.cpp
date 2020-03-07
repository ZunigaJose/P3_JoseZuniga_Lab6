#include "Hexa.hpp"
#include <string>
#include <cmath>
#include <string.h>
using namespace std;

Hexa::Hexa(string numero) : Numero(numero) {}

string Hexa::toString() { return numero; }

Numero Hexa::operator- (Numero x) {
  int n1 = toInt();
  int suma = n1 - x.toInt();
  cout << "Suma:\n";
  cout << "Bin: " << x.Bin(suma) << endl;
  cout << "Hexa: "<< x.Hex(suma) << endl;
  cout << "Octal: "<< x.Oct(suma) << endl;
  cout << "Decimal: " << suma << endl;
  return (Numero)(Hexa(to_string(suma)));
}

Numero Hexa::operator+ (Numero x) {
  int n1 = toInt();
  int suma = n1 + x.toInt();
  cout << "Suma:\n";
  cout << "Bin: " << x.Bin(suma) << endl;
  cout << "Hexa: "<< x.Hex(suma) << endl;
  cout << "Octal: "<< x.Oct(suma) << endl;
  cout << "Decimal: " << suma << endl;
  return (Numero)(Hexa(to_string(suma)));
}

int Hexa::toInt() {
  char num[25];
  int r, len, decimal = 0;
  len = strlen(num) - 1;
  for (int i = 0; num[i] != '\0'; i++) {
    if (num[i] >= '0' && num[i] <= '9')
      r = num[i] - 48;
    else if (num[i] >= 'a' && num[i] <= 'f')
      r = num[i] - 87;
    else if (num[i] >= 'A' && num[i] <= 'F')
      r = num[i] - 55;
    decimal += r * pow(16, len);
    len--;
  }
  return decimal;
}
