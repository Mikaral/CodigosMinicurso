#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  int x;
  int *ptr; //Declarando a variavel ptr como apontador
  x = 5;
  ptr = &x;  //Varivel ptr assume mesmo endereço de memoria que a variavel x
  cout << "O valor da variável X é: " << *ptr << endl;  //Assume o mesmo valor por estar no mesmo endereço de memoria
  *ptr = 10;      //modifica o conteudo no espaço de memoria
  cout << "Agora, X vale: " << x << endl;  //exibe o valor no espaço de memoria de x (que e o mesmo do apontador)
  
  return 0;
}