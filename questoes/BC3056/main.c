#include <stdio.h>

int main() {
 
    int step;
    long long int numa,lado,cont;
    scanf("%d",&step);
    cont = 1;
    numa = 4;
    lado = 2;
    for (int i=0;i<step;i++) {
        lado = lado + cont;
        numa = lado * lado;
        cont = cont * 2;
    }
    printf("%lld\n",numa);
    return 0;
}