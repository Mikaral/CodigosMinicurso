#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    string frase;
    string letra;
    frase = "O dia esta lindo hoje!";

    cout<<"Adicione uma letra a frase: "<<endl;
    cin>>letra;
    frase.append(letra);
    cout<<frase<<endl;
}