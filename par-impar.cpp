#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(){
    int num;

    cout<<("Insira um número para que ele seja classificado em: Par/Impar:")<<endl;
    cin>>num;

    if(num%2 == 0){
        cout<<("O numero digitado é par")<<endl;
    }
    else if(num%2 !=0 || num%2 > 0){
        cout<<("O numero digitado é impar")<<endl;
    }


}