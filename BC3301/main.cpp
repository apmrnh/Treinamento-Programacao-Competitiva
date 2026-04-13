#include <stdio.h>
 
int main() {
 
    int H,Z,L;
    scanf("%d%d%d",&H,&Z,&L);
    if (Z > H && Z < L || Z > L && Z < H) {
        printf("zezinho\n");
    }
    else if (L > Z && L < H || L < Z && L > H) {
        printf("luisinho\n");
    }else {
        printf("huguinho\n");
    }
    return 0;
}