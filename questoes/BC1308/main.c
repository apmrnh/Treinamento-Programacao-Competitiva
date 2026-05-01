#include <stdio.h>
#include <math.h>

int main() {

    int caso;
    scanf("%d",&caso);
    long long int guerreiro,l;
    for (int cont = 0; cont < caso; cont++) {
        scanf("%lld", &guerreiro);
        l = 1;
        l = (-1 + sqrt(1 + 8 * guerreiro))/2;
        printf("%lld\n", l);
    }


    return 0;
}