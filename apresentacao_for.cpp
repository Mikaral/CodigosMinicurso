#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
//Programa para aplicação do uso do For, While e Do While

int contador();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int valor;
    cout<<("Neste Programa será aplicado o uso do For para uma contagem simples:")<<endl;
    cout<<("Contagem de 1 até 10 com laço de repetição for:")<<endl;
    contador();

}

int contador(){
    int contagem = 0; //para toda e qualquer contagem, devemos inicializar a variavel que ira receber essa contagem com valor 0;
    for(int i=0; i<10;i++){
        contagem = i+1;
        cout<<("Contagem: ")<<contagem<<endl;
    }
    return contagem;
}