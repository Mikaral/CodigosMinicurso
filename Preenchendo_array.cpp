# include <iostream>
# include <iomanip>
# include <locale.h>

using namespace std;

	
int main(){
	setlocale(LC_ALL,"Portuguese"); //Adicionando a possibilidade de impress�o de caracteres acentuados
	
	// Para se determinar um Array, usamos a seguinte nomenclatura:
	int Array[10];
	//Acima, � declarado um array com 10 espa�os de memoria para aloca��o
	
	
	//Exibindo o que h� na posi��o 2 do nosso array de 10 dimens�es
	cout<<("Valor armazenado na posi��o 2: \n")<<Array[2]<<endl; //� impresso lixo de mem�ria
	
	//Vamos agora adicionar um elemento nessa posi��o:
	
	Array[2] = 25;
	
	cout<<("Valor armazenado na posi��o 2 ap�s o armazenamento na variavel: \n")<<Array[2]<<endl;
	
	// como aprendemos anteriormente, agora vamos usar um la�o de repeti��o para podermos preencher o nosso Array.
	cout<<("Agora, vamos preencher posi��es do nosso Array de uma forma recursiva: \n");
	
	for(int i = 0; i<10;i++){
		cout<<("Adicionando elemento na posi��o: ")<<i<<endl;
		cin>>Array[i];
	}
	//agora iremos exibir nosso array preenchido:
	cout<<("Nosso Array Preenchido: ")<<endl;
	for(int j = 0; j<10; j++){
	
		cout<<("Elemento ")<<j<<(":")<<Array[j]<<endl;
		
	}
	
}


