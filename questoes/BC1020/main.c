#include <stdio.h>

int main() {

    int idaded,ano,mes,dia;
    scanf("%d", &idaded);
    ano = idaded / 365;
    printf("%d ano(s)\n", ano);
    mes = (idaded % 365) / 30;
    dia = (idaded % 365) % 30;
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}