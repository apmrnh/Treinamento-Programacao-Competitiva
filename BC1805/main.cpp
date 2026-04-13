#include <stdio.h>
 
int main() {
 
    long long int v1,v2;
    scanf("%lld%lld",&v1,&v2);
    long long int soma = (v1 + v2) * (v2 - v1 +1) /2;
    printf("%lld\n",soma);
 
    return 0;
}