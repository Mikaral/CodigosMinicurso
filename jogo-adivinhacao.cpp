#include <iostream>
#include <iomanip>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int gerador_de_numero(int,int);
int main(){
    int valora,valorb,hipotese,numero_aleatorio, aleatorio,intervalo;
    int n = 1; //numero de tentativas
    setlocale(LC_ALL,"Portuguese");
    cout<<("Este é um jogo de adivinhações, o jogador que conseguir acertar o número que eu penso primeiro irá vencer!")<<endl
        <<("Primeiro, escolha uma faixa de valores que eu devo escolher: \nValor minimo:");
    cin>> valora;
    cout<<("Valor máximo:\n");
    cin>>valorb;
    numero_aleatorio = gerador_de_numero(valora,valorb);
    cout<<("ótimo!, já pensei em um número. Agora, qual número eu pensei?")<<numero_aleatorio<<endl;
    while(hipotese != numero_aleatorio){
        cin>>hipotese;
        if(numero_aleatorio == hipotese){
            cout<<("Parabéns, você acertou em ")<<n<<(" tentativas!!")<<endl;
        }
        else if(numero_aleatorio > hipotese){
            cout<<("Errado!\nEu pensei em um número maior do que esse >:)\nTente novamente!")<<endl;
            n+=1;
        }
        else if(numero_aleatorio < hipotese){
            cout<<("Errado!\nEu pensei em um número menor do que esse >:)\nTente novamente!")<<endl;
             n+=1;
        }
    }
    return 0;
}

int gerador_de_numero(int valora,int valorb){
    srand(time(0));
    int aleatorio,intervalo;
    intervalo = valora-valorb;
    aleatorio  =  valora + rand() % intervalo + 1;
    return aleatorio;
}