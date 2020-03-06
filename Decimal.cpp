#include <string>
#include "Decimal.hpp"
using namespace std;

Decimal::Decimal(string numero) : Numero(numero) {

}

string Decimal::toString(){
  return numero;
}
int Decimal::toInt() {
  return stoi(numero);
}
