#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int i,j,k;
    //Aplicação de multiplos de 0 a 10 e de 1 até 10
    for(i= 1; i<10;i++){
        for(j = 1; j<=10;j++){
            k  = i*j;
            cout<<k<<("\t");
        }
        cout<<("\n");
    }
    return 0;
}