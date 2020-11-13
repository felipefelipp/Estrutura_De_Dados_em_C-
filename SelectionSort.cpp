#include <iostream>
#include <locale.h>   //setlocale
#include <stdlib.h>   //system  
#include <string>     //Textos em geral

using namespace std;

void selectionSort(int vet[], int tam);
void impVetor(int vet[], int tam);

int main() {

    int vetor[5] = {3, 6, 9, 33, 11};
    int i;

    
    selectionSort(vetor, 5);
    impVetor(vetor, 5);

}

void selectionSort(int vet[], int tam) {
    int indexMin, i, j;
        //percorrer todos os números
        for (i = 0; i < tam - 1; i++) {

            //Define o elemento atual como o menor
            indexMin = i;

            //Encontra o menor valor após "i + 1"
            for (j = i + 1; j < tam; j++)
            {
                if (vet[j] < vet[i]) {
                    indexMin = j;
                }
            }   
            
            cout << "Troca " << vet[i] << " por " << vet[indexMin] << endl;

            if (indexMin != i) {
                int temp = vet[indexMin];
                vet[indexMin] = vet[i];
                vet[i] = temp;
            }
        
        }
    }


void impVetor(int vet[], int tam) {
    int i;


    cout << vet[0];


    for (i = 1; i < 5; i++) {
        cout << " , " << vet[i];
    }
        cout << endl;
}