#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int* c;
    c = &a;
    cout << "Valor A: " << a << endl;
    cout << "Endereço A: " << &a << endl;
    cout << "" << endl;
    cout << "Valor C: " << c << endl;
    cout << "Endereço C: " << &c << endl;
    cout << "" << endl;

    int* b;
    cout << "Valor A: " << a << endl;

    b = &a;
    cout << a << endl;

    (*b) = 20;

    cout << a << endl;
    cout << b << endl;

    // Estudar Alocação Dinâmica de Memória (slide de ponteiros)
};