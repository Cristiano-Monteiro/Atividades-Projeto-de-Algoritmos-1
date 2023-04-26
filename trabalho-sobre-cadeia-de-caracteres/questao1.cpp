#include <iostream>
using namespace std;

/*
Faça uma função que receba como parâmetro uma cadeia de caracteres e retorne quantas vogais a 
cadeia de caracteres possui.
int Contador (c)
*/

int contador(char *c){
    char vogaisMinusc[] = {'a', 'e', 'i', 'o', 'u'};
    char vogaisMaiusc[] = {'A', 'E', 'I', 'O', 'U'};

    int quantidadeVogais = 0;

    for(int i = 0; c[i] != '\0'; i++){
        for(int j = 0; j < 5; j++){
            if(c[i] == vogaisMinusc[j] || c[i] == vogaisMaiusc[j]){
                quantidadeVogais++;
            };
        };
    };
    return quantidadeVogais;
};


int main(){
    char cadeia[100];
    cout << "Digite a cadeia de caracteres: ";
    cin >> cadeia;
    int resultado = contador(cadeia);
    cout << "Quant. de Vogais: " << resultado << endl;
    return 0;
};