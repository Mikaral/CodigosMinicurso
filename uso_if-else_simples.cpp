#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//Algoritimo: vamos implementar uma calculadora de juros simples e composto a partir de um montante e por n meses determinados pelo usuario:
//Para isso, informações do usuário devem ser coletadas em todos os casos: A taxa de juros; o tempo de aporte e o capital a ser aportado.

int main(){
    float montante, valor_aportado, taxa_de_juros,capital,juros;
    int escolha,tempo;

    cout<<("\t####Bem vindo a Calculadora de Juros Simples e Composto#####")<<endl;
    cout<<("Escolha uma das opções abaixo: \n1- Juro Simples\n2-Juros Compostos")<<endl;
    cin>>escolha;
    if(escolha == 1) {
        cout<<("Para o calculo de juros simples é necessário que você informe os seguintes atributos:")<<endl;
        cout<<("1- Taxa de Juros mensal:")<<endl;
        cin>>taxa_de_juros;
        cout<<("2- Capital Aportado:")<<endl;
        cin>>capital;
        cout<<("Tempo de Empréstimo (em meses)")<<endl;
        cin>>tempo;
        //Formula do calculo de juros simples: J = C*i*t (J = Juros; i = taxa; t = tempo)
        montante = (capital*taxa_de_juros*tempo) + capital;
        juros = montante-capital;
        cout<<("Aportando a Juros Simples R$")<<capital<<(" com uma taxa de juros de ")<<taxa_de_juros<<(" por ")<<tempo<<(" meses, teremos: R$")
            <<montante<<(" no término do emprestimo.")<<endl;
        cout<<("Portanto, houve um acrescimo por juros de: R$")<<juros<<endl;
    } else{
        cout<<("Para o calculo de juros compostos é necessário que você informe os seguintes atributos:")<<endl;
        cout<<("1- Taxa de Juros Anual:")<<endl;
        cin>>taxa_de_juros;
        cout<<("2- Capital Aportado:")<<endl;
        cin>>capital;
        cout<<("Tempo de Empréstimo (em meses)")<<endl;
        cin>>tempo;

        //Formula de juros compostos: M = C*(1+i)^t (C = capital; i = taxa; t= tempo; M = montante)
        //Função pow(base,expoente) presenta na biblioteca math.h. útil para calculo de exponenciais e potenciações.
        montante = capital*pow(1+taxa_de_juros,tempo/12);
        juros = montante-capital;

        cout<<("Aportando a Juros Composto R$")<<capital<<(" com uma taxa de juros de ")<<taxa_de_juros<<(" por ")<<tempo<<(" meses teremos: R$")
            <<montante<<(" no término do emprestimo.")<<endl;
        cout<<("Portanto, houve um acrescimo por juros de: R$")<<juros<<endl;
    }
    return 0;
}