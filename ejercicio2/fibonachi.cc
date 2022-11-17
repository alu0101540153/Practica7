/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file 
  * @author Víctor Rodríguez Dorta  alu0101540153@ull.edu.es
  * @date Oct 12 2022
  * @brief 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
using namespace std;

int main() {

  int n, x=0, y=1, z=1;
  cin >> n;
  
  for ( int i= 1; i<=n ; i++  ) {
  z= x + y;
  cout << z << " ";
  x = y;
  y = z;

  }
  cout << endl;

  





return 0;
}
