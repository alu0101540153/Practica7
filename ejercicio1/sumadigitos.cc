/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file 
  * @author Víctor Rodríguez Dorta  alu0101540153@ull.edu.es
  * @date Oct 12 2022
  * @brief This program read a number and calculate the sum of all his digits
  * @bug There are no known bugs
  */

#include <iostream>
using namespace std;
int main() {

  int number; 
  int sum=0; //sum of all his digits
  cin >> number;
  
  // A while that take the digit and sum into sum variable
  while( number > 0 ){
    sum = sum + number%10;
    number = number/10;
  }
  cout << sum << endl;

  return 0;
}
