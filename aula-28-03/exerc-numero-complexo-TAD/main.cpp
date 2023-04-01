#include <iostream>
#include "numComplex.cpp"

using namespace std;

int main(){
    numeroComplexo num1, num2, num3, numCopia, soma;
    num1 = iniciar(6, 5);
    num2 = iniciar(2, -1);
    num3 = iniciar(10, 0);
    imprimir(num1);
    imprimir(num2);
    copiar(&numCopia, num1);
    cout << "NumCopia:" << endl;
    imprimir(numCopia);
    soma = somar(num1, num2);
    cout << "Soma:" << endl;
    imprimir(soma);
    cout << "NUM1: ";
    ehReal(num1);
    cout << "NUM2: ";
    ehReal(num2);
    cout << "NUM3: ";
    ehReal(num3);
};