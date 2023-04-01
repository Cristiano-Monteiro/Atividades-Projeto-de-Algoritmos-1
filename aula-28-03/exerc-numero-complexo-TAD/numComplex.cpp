#include <iostream>
#include "numComplex.h"

using namespace std;

numeroComplexo iniciar(int nR, int nIm){
    numeroComplexo complexNumber;
    complexNumber.numReal = nR;
    complexNumber.numImaginario = nIm;
    return complexNumber;
};

void imprimir(numeroComplexo num){
    cout << "Número Complexo -> ";
    cout << num.numReal << " + ";
    cout << num.numImaginario << "i" << endl;
    cout << "" << endl;
};

void copiar(numeroComplexo* num2, numeroComplexo num1){
    num2->numReal = num1.numReal;
    num2->numImaginario = num1.numImaginario;
};

numeroComplexo somar(numeroComplexo num1, numeroComplexo num2){
    numeroComplexo resultado;
    resultado.numReal = num1.numReal + num2.numReal;
    resultado.numImaginario = num1.numImaginario + num2.numImaginario;
    return resultado;
};

void ehReal(numeroComplexo num){
    if(num.numReal != 0 && num.numImaginario == 0){
        cout << "O número complexo será Real!" << endl;
    } else {
        cout << "O número complexo NÃO será Real!" << endl;
    };
};