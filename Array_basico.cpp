# include <iostream>
# include <iomanip>
# include <locale.h>

using namespace std;

int main(){
	//declarando um array do timpo inteiro e preenchendo ele:
				//	0  1  2 3 4 
	int intArray[5] = {34,12,3,4,5};
	
	//Exibindo elemento de acordo com a posição:
	
	cout<<("Elemento 3: ")<<intArray[3]<<endl;
	
					   //	0   1    2     3     4 
	float FloatArray[5] = {3.5,89.9,10.0,11.456,3.5};
	
	cout<<setprecision(3)<<endl; //Determina o numero de casas a serem exibidas.
	//Exibindo elemento de acordo com a posição:
	cout<<("Elemento 3: ")<<FloatArray[3]<<endl;
	
	setlocale(LC_ALL,"Portuguese"); //Adicionando a possibilidade de impressão de caracteres acentuados
						//    0        1        2        3       4
	string StringArray[5] = {"Ola","Bom Dia", "Hoje", "Amanhã","Manhã"};
	
	//Exibindo elemento de acordo com a posição:
	cout<<("Elemento 2: ")<<StringArray[2]<<endl;
	
	return 0;
	
}
