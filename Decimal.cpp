#include <string>
#include "Decimal.hpp"
using namespace std;

Decimal::Decimal(string numero) : Numero(numero) {

}

Numero Decimal::operator* (Numero x) {
  int n1 = toInt();
  int suma = n1 * x.toInt();
  cout << "Suma:\n";
  cout << "Bin: " << x.Bin(suma) << endl;
  cout << "Hexa: "<< x.Hex(suma) << endl;
  cout << "Octal: "<< x.Oct(suma) << endl;
  cout << "Decimal: " << suma << endl;
  return (Numero)(Decimal(to_string(suma)));
}

Numero Decimal::operator+ (Numero x) {
  int n1 = toInt();
  int suma;
  for (int i = 0; i < x.toInt(); i++) {
    suma = n1 + x.toInt();
  }
  //int suma = n1 + x.toInt();
  cout << "Suma:\n";
  cout << "Bin: " << x.Bin(suma) << endl;
  cout << "Hexa: "<< x.Hex(suma) << endl;
  cout << "Octal: "<< x.Oct(suma) << endl;
  cout << "Decimal: " << suma << endl;
  return (Numero)(Decimal(to_string(suma)));
}

Numero Decimal::operator- (Numero x) {
  int n1 = toInt();
  int suma = n1 - x.toInt();
  cout << "Suma:\n";
  cout << "Bin: " << x.Bin(suma) << endl;
  cout << "Hexa: "<< x.Hex(suma) << endl;
  cout << "Octal: "<< x.Oct(suma) << endl;
  cout << "Decimal: " << suma << endl;
  return (Numero)(Decimal(to_string(suma)));
}

string Decimal::toString(){
  return numero;
}
int Decimal::toInt() {
  return stoi(numero);
}
