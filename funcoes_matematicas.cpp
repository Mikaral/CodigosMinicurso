#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

float potencia(float , float );

float trigonometria(float ,int );

int main(){
    int opc;
    float base, expoente,argumento;
    
    cout<<("1 - Valor absoluto de um numero negativo: ")<<endl
        <<("2 - Calcular uma potenciação: ")<<endl
        <<("3 - Operações trigonometricas: ")<<endl;
    cin>> opc;
    switch(opc){
        case 1: 
            cout<<"Insira o numero negativo: "<<endl;
            cin>> a;
            cout<<"Valor absoluto de "<<a<<(" = ")<<abs(a)<<endl;
            break;
        case 2:
            cout<<("Informe o valor da base: ")<<endl;
            cin>> base;
            cout<<("Informe o valor do expoente: ")<<endl;
            cin>> expoente;
            cout<<("Resultado da operação: ")<<potencia(base,expoente)<<endl;
            break;
        case 3: 
            cout<<("Informe qual operação você deseja fazer: ")<<endl
                <<("1 - Cosseno\n2-Seno\n3-Tangente")<<endl;
            cin>> opc;
            cout<<"Ótimo, insira agora o argumento: (valores reais)"<<endl;
            cin>> argumento;
            cout<<("Resultado da operação: ")<<trigonometria(argumento,opc)<<endl;
            break;
        default:
            break;
    }

}
float potencia(float base, float expoente){
    float potencial;
    potencial = pow(base,expoente);
    return potencial;
}
float trigonometria(float valor,int opcao){
    float resultado;
    if(opcao == 1){
        resultado = cos(valor);
    }
    else if(opcao == 2){
        resultado = sin(valor);
    }
    else if(opcao == 3){
        resultado = tan(valor);
    }
    return resultado;
}