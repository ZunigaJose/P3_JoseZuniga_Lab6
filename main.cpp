#include "Numero.hpp"
#include "Binarios.hpp"
#include "Hexa.hpp"
#include "Decimal.hpp"
#include "Octal.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Numero*> valores;

void meterVect(string num) {
  bool dentro = false;
  if(num[num.length() - 1] == 'b') {
    valores.push_back(dynamic_cast<Numero*>(new Binarios(num)));
    dentro = true;
  } else {
    string sub = num.substr(0, 2);
    if(sub == "0c") {
      valores.push_back(dynamic_cast<Numero*>(new Octal(num)));
      dentro = true;
    } else if(sub == "0x") {
      valores.push_back(dynamic_cast<Numero*>(new Hexa(num)));
      dentro = true;
    } else if(!dentro){
      valores.push_back(dynamic_cast<Numero*>(new Decimal(num)));
    }
  }
}

void imprimir() {
  cout << endl;
  for (size_t i = 0; i < valores.size(); i++) {
    cout << i << ": " << valores[i] -> toString() << endl;
  }
  cout << endl;
}

int menu() {
  int op;
  cout << "0. Salir\n1. Ingresar numero\n2. Listar Numeros\n3. Operacion: ";
  cin >> op;
  if (op < 0 || op > 3) {
    return menu();
  }
  return op;
}

void ingresoN() {
  string n;
  cout << "Ingrese un numero: ";
  cin >> n;
  meterVect(n);
}

int main() {
  int op;
  do {
    op = menu();
    switch (op) {
      case 1:
        ingresoN();
      break;
      case 2:
        imprimir();
      break;
    }
  } while(op);
  return 0;
}
