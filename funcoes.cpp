# include <iostream>
# include <iomanip>
# include <locale.h>

using namespace std;

//definindo o escopo da fun��o.
int soma(int,int);

int main (){
	setlocale(LC_ALL,"Portuguese"); //Adicionando a possibilidade de impress�o de caracteres acentuados
	int valorA, valorB,subtrator; //declarando variaveis para a e b do tipo inteiro
	
	cout<<("Vamos somar valores!?\n Digite um valor para A e para B:")<<endl;
	cout<<("Valor a: ")<<endl; //recebendo valor de a
	cin>>valorA;
	cout<<("Valor b: ")<<endl; //recebendo valor de b
	cin>>valorB;
	
	cout<<("Resultado da soma: ")<<soma(valorA, valorB)<<endl; //imprimindo o resultado da soma.
	
	cout<<("Vamos efetuar uma subtração da soma?\nAdicione um valor para subtrair: (numero inteiro e menor que o somatorio) ")<<endl;
	cin>> subtrator;
	
	int subtracao  = soma(valorA,valorB) - subtrator;  //efetuando subtra��o do valor retornado da fun��o de soma
	
	cout<<("Resultado da subtração: ")<<subtracao<<endl; //exibindo o resultado
	
	
}

//fun��o de soma que recebe dois valores inteiros como parametro.
int soma(int a, int b){
	int somatorio;
	
	somatorio = a+b; //efetuando soma
	
	return somatorio; //retornando o valor da soma. A partir desse momento, essa fun��o tem valor da soma do tipo inteiro.
}
