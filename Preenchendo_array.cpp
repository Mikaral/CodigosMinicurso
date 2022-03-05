# include <iostream>
# include <iomanip>
# include <locale.h>

using namespace std;

	
int main(){
	setlocale(LC_ALL,"Portuguese"); //Adicionando a possibilidade de impressão de caracteres acentuados
	
	// Para se determinar um Array, usamos a seguinte nomenclatura:
	int Array[10];
	//Acima, é declarado um array com 10 espaços de memoria para alocação
	
	
	//Exibindo o que há na posição 2 do nosso array de 10 dimensões
	cout<<("Valor armazenado na posição 2: \n")<<Array[2]<<endl; //é impresso lixo de memória
	
	//Vamos agora adicionar um elemento nessa posição:
	
	Array[2] = 25;
	
	cout<<("Valor armazenado na posição 2 após o armazenamento na variavel: \n")<<Array[2]<<endl;
	
	// como aprendemos anteriormente, agora vamos usar um laço de repetição para podermos preencher o nosso Array.
	cout<<("Agora, vamos preencher posições do nosso Array de uma forma recursiva: \n");
	
	for(int i = 0; i<10;i++){
		cout<<("Adicionando elemento na posição: ")<<i<<endl;
		cin>>Array[i];
	}
	//agora iremos exibir nosso array preenchido:
	cout<<("Nosso Array Preenchido: ")<<endl;
	for(int j = 0; j<10; j++){
	
		cout<<("Elemento ")<<j<<(":")<<Array[j]<<endl;
		
	}
	
}


