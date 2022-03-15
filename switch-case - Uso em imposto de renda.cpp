#include <iostream>
#include <iomanip>
#include<locale.h>

using namespace std;

float calculaimpostoderenda(int,float);
void Menu();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    float salario;
    Menu();
    cin>>  opcao;
    cout<<("Agora informe o valor exato do seu salario")<<endl;
    cin>> salario;
    calculaimpostoderenda(opcao,salario);
    cout<<("Salario com Desconto do Imposto de Renda: R$")<<calculaimpostoderenda(opcao,salario)<<endl;

    return 0;

}

float calculaimpostoderenda(int opc,float salario){
    float valor;
    switch(opc){
        case (1):
            valor = salario;
            break;
        case(2):
            valor = salario-(salario*0.075);
            break;
        case(3):
            valor = salario-(salario*0.15);
            break;
        case(4):
            valor = salario-(salario*0.225);
            break;
        case(5):
            valor = salario-(salario*0.275);
            break;
        default:
            break;
    }
    return valor;
}

void Menu(){
    cout<<("Programa de calculo para o Imposto de Renda!")<<endl;
    cout<<("Atente-se a faixa de valores que você se enquadra:\n")
        <<(" 1- salario <= R$2220.70 -> Isento \n 2- R$2220.74 < salario >= R$3296.86 -> 7.5%\n ")
        <<("3- R$3296.86 < salario >= R$4375.03 -> 15% \n 4- R$4375.04 < salario <= R$5440.64 -> 22.5% \n")
        <<(" 5- salario > R$5440.64 -> 27.5% \n");
}
