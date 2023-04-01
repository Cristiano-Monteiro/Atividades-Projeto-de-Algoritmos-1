#include <iostream>
#include "conta.cpp"

int main(int arg, char** argv){
    conta c;
    c = iniciar(2020, 10000);
    imprimir(c);
    deposito(&c, 1);
    imprimir(c);
    saque(&c, 20000);
    imprimir(c);
    return 0;
};