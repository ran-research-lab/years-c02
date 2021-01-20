/*

El multimap es un tipo de contenedor asociativo que permite guardar pares ordenados tipo 
llave / valor. Donde llave es el numero o string por el que vamos a querer buscar 
dentro del contenedor. 

Te lo puedes imaginar como una bolsa mágica en la que puedes guardar pares de datos. 
Que en cualquier momento deseas encontrar uno de los llaves y mágicamente encuentras
el papelito.
*/


#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int tmpAge; 
  string tmpName;
  multimap<string,int> m;

  while (cin >> tmpName >> tmpAge) 
    m.insert(pair<string,int>(tmpName,tmpAge)); 
  

  for (auto e: m) 
    cout << e.first << " " << e.second << endl;


  return 0;
}
