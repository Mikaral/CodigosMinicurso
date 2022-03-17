#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
//Programa para aplicação do uso do For, While e Do While

float calculadora_basica(float,float);

int main(){
    setlocale(LC_ALL,"Portuguese");
    float valor1,valor2;
    cout<<("Neste Programa será aplicado o uso do laço While para a implementação de uma calculadora")<<endl;
    cout<<("A calculadora PELS/IAS calcula indefinidamente a soma de valores\nInsira ao menos 2 valores para soma:\n");
    cout<<("valor 1:")<<endl;
    cin>>valor1;
    cout<<("valor 2:")<<endl;
    cin>>valor2;
    calculadora_basica(valor1,valor2); //chamando a fun��o de calculo
    
    
    return 0;
}

float calculadora_basica(float valor1,float valor2){
    float somatorio,elemento;
    int somar = 1;
    somatorio = valor1+valor2;
    int n = 3;
    
    while(somar){
    	cout<<"Informe o "<<n<<(" elemento")<<endl;
        cin>> elemento;
        somatorio = somatorio+elemento;
        n+=1;
        cout<<("Digite 1 para continuar a soma ou 0 para parar!")<<endl;
        cin>>somar;
    }
	cout<<"Somatorio:"<<somatorio<<endl;
}
