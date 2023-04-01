#include <iostream>
#include "conta.h"

using namespace std;

conta iniciar(int n, double s){
    conta varConta;
    varConta.numero = n;
    varConta.saldo = s;
    return varConta;
};

void saque(conta* c, double valor){
    c->saldo -= valor;
};

void deposito(conta* c, double valor){
    c->saldo += valor;
};

void imprimir(conta c){
    cout << "Conta: " << c.numero << endl;
    cout << "Saldo: " << c.saldo << endl;
};