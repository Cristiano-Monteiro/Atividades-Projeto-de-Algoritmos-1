typedef struct{
    int numero;
    double saldo;
} conta;

conta iniciar(int n, double s);

void saque(conta* c, double valor);
void deposito(conta* c, double valor);
void imprimir(conta c);