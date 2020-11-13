#include <iostream>
#include <locale.h>   //setlocale
#include <stdlib.h>   //system  
#include <string>     //Textos em geral

using namespace std;

struct Coordenada {
    int x, y, z;
};

void inserirDados(Coordenada ponto);
void imprimirDados(Coordenada ponto);

int main() {
    Coordenada pontoA;
    Coordenada pontoB;


    pontoA.x = 10;
    pontoA.y = 108;
    pontoA.z = 10090;


    //inserirDados(pontoA);
    imprimirDados(pontoA);
    


    return 0;
}

void imprimirDados(Coordenada ponto) {
    cout << "Ponto X: " << ponto.x << endl;
    cout << "Ponto Y: " << ponto.y << endl;
    cout << "Ponto Z: " << ponto.z << endl;
}

void inserirDados(Coordenada ponto) {
    cout << "Digite o ponto X: " << endl;
    cin >> ponto.x;
    cout << "Digite o ponto Y: " << endl;
    cin >> ponto.y;
    cout << "Digite o ponto Z: " << endl;
    cin >> ponto.z;
}

