#include <iostream>
#include <locale.h>   //setlocale
#include <stdlib.h>   //system  
#include <string>     //Textos em geral

using namespace std;
void imprimirVetor(int vet[], int tam);
void insertionSort(int vet[], int tam);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[5] = {13, 23, 3, 8, 1};
    int i;


    //Antes
    imprimirVetor(vetor, 5);


    //SelectionSort
    insertionSort(vetor, 5);

    //Depois
    imprimirVetor(vetor, 5);



    return 0;
}

void insertionSort(int vet[], int tam) {
    int valueInsert;
    int posInsert;
    int i;

    // percorrer todos os números   
    for(i = 1; i < tam; i++) {
        // Selecione o valor a ser inserido
        valueInsert = vet[i];

        // Selecione a posição onde o numero deve ser inserido
        posInsert = i;

        cout << "---------------------------------\n";
        imprimirVetor(vet, 5);
        cout << "---------------------------------\n";
        cout << "Valor: " << valueInsert << endl; 
        cout << "Posicao Inserção: " << posInsert << endl << endl;


        // verifica se anterior não é maior que o valor a ser inserido
        while(posInsert > 0 && vet[posInsert - 1] > valueInsert) {
            vet[posInsert] = vet[posInsert - 1];
            posInsert--;
            imprimirVetor(vet, 5);
        }

        if (posInsert !=  i) {
            cout << "\tInsere: " << valueInsert << " na posição: " << posInsert << endl;
            vet[posInsert] = valueInsert;
        }

    }
}


void imprimirVetor(int vet[], int tam) {
    int i;
    cout << vet[0];

    // Após troca
    for(i = 1; i < 5; i++) {
        cout << ", " << vet[i];
    }
    cout << endl;
}
