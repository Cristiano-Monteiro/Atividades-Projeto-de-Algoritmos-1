#include <iostream>
#include <string.h>
using namespace std;

#define TRUE 1
#define FALSE 0

/*
Escreva uma função que recebe uma cadeia de caracteres s e t e decida se s é um segmento de t. 
Também escreva uma função para contar o número de ocorrências da cadeia de caracteres s em t.
Exemplo:
s = da
t = abcdabcd
ocorreu 1x
*/

bool contemSegmento(char *s, char *t){
    int sizeS = 0;
    for(int i = 0; s[i] != '\0'; i++){
        sizeS++;
    };

    bool verificacao = FALSE;

    for(int i = 0; t[i] != '\0'; i++){
        char subCadeia[sizeS+1];
        int pos = 0;

        if(t[i] == s[0]){
            pos = i;
            for(int j = 0; j < sizeS; j++){
                subCadeia[j] = t[pos];
                if(j != sizeS-1){
                    pos++;
                } else {
                    subCadeia[sizeS] = '\0';
                };
            };

            //cout << "=> " << subCadeia << endl;

            if(strcmp(s, subCadeia) == 0){
                verificacao = TRUE;
            };
        };
    };

    return verificacao;
};

int numeroDeOcorrencias(char *s, char *t){
    int sizeS = 0;
    for(int i = 0; s[i] != '\0'; i++){
        sizeS++;
    };

    int contador = 0;

    for(int i = 0; t[i] != '\0'; i++){
        char subCadeia[sizeS+1];
        int pos = 0;

        if(t[i] == s[0]){
            pos = i;
            for(int j = 0; j < sizeS; j++){
                subCadeia[j] = t[pos];
                if(j != sizeS-1){
                    pos++;
                } else {
                    subCadeia[sizeS] = '\0';
                };
            };

            if(strcmp(s, subCadeia) == 0){
                contador++;
            };
        };
    };

    return contador;
};

int main(){
    char s[100];
    char t[100];

    cout << "Digite p/ cadeia s: ";
    cin >> s;

    cout << "Digite p/ cadeia t: ";
    cin >> t;

    bool resultado = contemSegmento(s, t);

    cout << s << " esta dentro de " << t;
    if(resultado){
        cout << " ? TRUE" << endl; 
    } else {
        cout << " ? FALSE" << endl; 
    };

    int quantidadeOcorrencias = numeroDeOcorrencias(s, t);
    cout << "Numero de ocorrencias: " << quantidadeOcorrencias << endl;
    return 0;
};