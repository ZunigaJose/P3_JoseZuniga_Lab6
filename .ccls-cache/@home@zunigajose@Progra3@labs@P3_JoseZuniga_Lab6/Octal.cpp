#include "Octal.hpp"
#include <string>
using namespace std;

Octal::Octal(string numero) : Numero(numero) {
}

string Octal::toString() {
  return numero;
}

int Octal::toInt() {
  return 0; //falta de que u
}
