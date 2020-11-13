#include <iostream>
#include <locale.h>   //setlocale
#include <stdlib.h>   //system  
#include <string>     //Textos em geral

using namespace std;

void func(int *x)
{
    do{
        cout << *x << " ";
        (*x)--;
    }while(*x>0);
}

main()
{
    int x=5;
    func(&x);
    cout << x;
    system("pause");
}

