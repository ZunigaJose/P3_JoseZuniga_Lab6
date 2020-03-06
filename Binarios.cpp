#include "Binarios.hpp"
#include <string>
#include <cmath>
using namespace std;

Binarios::Binarios(string numero) :  Numero(numero) {
}

string Binarios::toString() {
  return numero;
}

Binarios &Binarios::operator+(Numero x) {
  int n1 = toInt();
  int suma = n1 + x.toInt();
  return *this;
}

int Binarios::toInt() {
  int n = (stoi(numero.substr(0, numero.length() - 2)));
  int num = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        num += remainder*pow(2,i);
        ++i;
    }
    return num;
}
