#include "Numero.hpp"
#include <string>
#include <bits/stdc++.h>

Numero::Numero(string numero) {
  this -> numero = numero;
}
string Numero::Bin(int decimal) {
  string bin = "";
  while (decimal > 0) {
    bin += to_string(decimal % 2);
    decimal /= 2;
  }
  reverse(bin.begin(), bin.end());
  return bin;
}

string Numero::Oct(int decimal) {
  int oct = 0, pos = 1;
   int dNo = decimal;
   while (decimal != 0) {
      oct += (decimal % 8) * pos;
      decimal /= 8;
      pos *= 10;
   }
   return to_string(oct);
}

string Numero::Hex(int decimal) {
  int r;
  string hexN = "";
  char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  while (decimal > 0) {
    r = decimal % 16;
    hexN = hex[r] + hexN;
    decimal = decimal / 16;
  }
  return hexN;
}

/*Numero Numero::operator+ (Numero x){
  Numero temp = *this;
   int suma = temp.toInt() + x.toInt();
   cout << "Suma:\n";
   cout << "Bin: " << x.Bin(suma) << endl;
   cout << "Hexa: "<< x.Hex(suma) << endl;
   cout << "Octal: "<< x.Oct(suma) << endl;
   cout << "Decimal: " << suma << endl;
   return Numero(to_string(suma));
}*/
