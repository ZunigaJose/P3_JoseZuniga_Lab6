#include "Numero.hpp"
#include "Binarios.hpp"
#include "Hexa.hpp"
#include "Decimal.hpp"
#include "Octal.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Numero> valores;

void meterVect(string num) {
  bool dentro = false;
  if(num[num.length() - 1] == 'b') {
    valores.push_back(Binarios(num));
    dentro = true;
  } else {
    string sub = num.substr(0, 2);
    if(sub == "0c") {
      valores.push_back(Octal(num));
      dentro = true;
    } else if(sub == "0x") {
      valores.push_back(Hexa(num));
      dentro = true;
    } else if(!dentro){
      valores.push_back(Decimal(num));
    }
  }
}

void ingresoN() {
  string n;
  cout << "Ingrese un numero: ";
  cin >> n;
  meterVect(n);
}

int main() {
  return 0;
}
