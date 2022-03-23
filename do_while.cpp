#include <iostream>
#include <iomanip>

using namespace std;
 
int main () {

   int a = 1;

   //Inicio de Looping Do While
   do{
      cout << "Valor atual de " << a << endl;
      a = a + 1;
   }while( a < 20 );
 
   return 0;
}