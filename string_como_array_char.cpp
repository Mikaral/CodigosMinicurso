#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    char letra;
    string frase;
    int cont = 0;  //iniciando o contador como 0

    cout<<("Digite uma frase: ")<<endl;
    getline(cin,frase);  //recebendo a frase
    cout<<("Digite o caracter que você deseja contar repetições: ")<<endl;
    cin>> letra;

    for(int i=0; i<=frase.length();i++){  //frase.length retorna o tamanho do array de caracteres. portanto, sera percorrido da posição 0 até o final da frase.
        if(frase[i] == letra){
            cont +=1;
        }
    }
    cout<<("Numero de vezes que aparece a letra (")<<letra<<(") na frase: ")<<cont;
    return 0;
}