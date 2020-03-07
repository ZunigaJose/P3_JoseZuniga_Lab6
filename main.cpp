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
    } else if(!dentro) {
      valores.push_back(dynamic_cast<Numero*>(new Decimal(num)));
    }
  }
}

void identificar(int num1,int num2) {

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

int subM() {
  int op;
  cout << "1. Sumar\n2. Resta\n3. Multiplicacion: ";
  cin >> op;
  if (op < 1 || op > 3) {
      return subM();
  }
  return op;
}

int elegir() {
  int op;
  imprimir();
  cout << "Elija su opcion: ";
  cin >> op;
  while (op < 0 || op > valores.size()) {
    cout << "Debe de elegir una opcion correcta!" << endl;
    cout << "Elija su opcion: ";
    cin >> op;
  }
  return op;
}

int main() {
  int op, subOp, num1, num2;
  Numero n("");
  do {
    op = menu();
    switch (op) {
      case 1:
        ingresoN();
      break;
      case 2:
        imprimir();
      break;
      case 3:
        subOp = subM();
        num1 = elegir();
        num2 = elegir();
        switch (subOp) {
          case 1:
            n = (*valores[num1]) + (*valores[num2]);
          break;
        }
      break;
    }
  } while(op);
  return 0;
}
