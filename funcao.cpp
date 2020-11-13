#include <iostream>
#include <locale.h>   //setlocale
#include <stdlib.h>   //system  
#include <string>     //Textos em geral

using namespace std;

void exibirMsg(); //protótipo da função, dessa forma que deve ser organizado o código
float calcularImposto();
int soma(int valor1, int valor2);
void alteraDados(int& valor);


int main() {
        setlocale(LC_ALL, "Portuguese");
        //float resultado;
        //exibirMsg();
        //int resultadoSoma;
        
        /*resultado = calcularImposto();
        cout << "O valor do imposto: " << resultado << endl;*/
        
        //resultadoSoma = soma(3,5);

        //cout << "Resultado da soma: " << resultadoSoma << endl;
        //system("pause"); //serv   e para dar uma pausa no código, pra ver o que está acontecendo
        
        int valort = 4;
        alteraDados(valort);
        cout << "Valor alterado: " << valort << "\n\n";
        
        
        
        return 0;

}

void exibirMsg() {
    cout << "Hello World! \n\n";
}

float calcularImposto() {
    float salario = 2000;
    float valorImposto;
     
    valorImposto = salario * .1;
    return valorImposto;
}


int soma(int valor1, int valor2) {
        int total;
        total = valor1 + valor2;
        return total;
}

void alteraDados(int& valor) {
    valor = 100;
}