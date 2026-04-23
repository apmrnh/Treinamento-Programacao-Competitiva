#include <stdio.h>
#include <math.h>

int main() {

    int C, N;
    scanf("%d", &C);
    for (int i = 0; i < C; i++) {
        scanf("%d", &N);
        int raiz, resultado;
        raiz = sqrt(N);
        resultado = N - raiz;
        printf("%d\n", resultado);
    }

    return 0;
}