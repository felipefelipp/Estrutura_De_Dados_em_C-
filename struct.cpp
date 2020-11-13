#include <iostream>
#include <locale.h>   //setlocale
#include <stdlib.h>   //system  
#include <string>     //Textos em geral

using namespace std;


struct Coordenada { //criar a struct (agrupamento) fora do main para poder ser usada por varias funções
    int x, y, z; 
    };


int definirTamanhoDoVetor();
void inserirCoordenadas(int posicaoVetor);
void exibirCoordenada(int entrada);
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    cout << "Informe as coordenadas x, y, z: " << endl;
    inserirCoordenadas(2);
    exibirCoordenada(2);
        
    
    
    //system("pause");
}

Coordenada ponto[];


int definirTamanhoDoVetor()  {
    int numeroCord;
    cout << "Deseja informar quantas coordenadas? " << endl;
    cin >> numeroCord; 
    return numeroCord;
}


void inserirCoordenadas(int posicaoVetor) {
    cout << "Digite a coordenada x: " << endl;
    cin >> ponto[posicaoVetor].x;
    cout << "Digite a coordenada y: " << endl;
    cin >> ponto[posicaoVetor].y;
    cout << "Digite a coordenada z: " << endl;
    cin >> ponto[posicaoVetor].z;

}


void exibirCoordenada(int entrada) {
    cout << "-----------------------------------" << endl;
    cout << "Coordenada x: " << ponto[entrada].x << endl;
    cout << "Coordenada y: " << ponto[entrada].y << endl;
    cout << "Coordenada z: " << ponto[entrada].z << endl;
    cout << "-----------------------------------" << endl; 

}