typedef struct{
    int numReal;
    int numImaginario;
} numeroComplexo;

numeroComplexo iniciar(int nR, int nIm);

void imprimir(numeroComplexo num);
void copiar(numeroComplexo* num2, numeroComplexo num1);
numeroComplexo somar(numeroComplexo num1, numeroComplexo num2);
void ehReal(numeroComplexo num);