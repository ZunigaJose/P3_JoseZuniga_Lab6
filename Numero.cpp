#include "Numero.hpp"
#include <string>

Numero::Numero(string numero) {
  this -> numero = numero;
}
string Numero::Bin() {
  
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
