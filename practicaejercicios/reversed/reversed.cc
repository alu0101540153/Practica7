#include <iostream>
#include <cstdlib>

using namespace std;

int invertirNumero(int );

int main(int argc, char *argv[]) {
 int num;
 
 cin>>num;
 cout<<invertirNumero(num)<<endl;
 return 0;
}

int invertirNumero(int num)
{
 int inv=0;
 while(num>0)
 {
  inv=inv * 10 + (num % 10);
  num = num / 10;
 }
 return inv;
}
