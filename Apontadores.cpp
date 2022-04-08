#include <iomanip>
#include <iostream>

using namespace std;
int main(){

  int a,b,c;
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma variável do tipo inteiro
  a = 90;
  b = 2;
  c = 3;
  ptr = &a;
  cout<<("Valor de ptr: ")<<ptr<<(" Conteúdo de ptr: ")<<*ptr<<endl;
  cout<<("Valor de a:")<<&a<<endl;
  cout<<("B: ")<<b<<("\tC: ")<<c<<endl;

  return 0;
}