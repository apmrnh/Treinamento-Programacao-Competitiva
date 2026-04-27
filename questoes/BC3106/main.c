#include <stdio.h>

int main() {

    int escola,total;
    total = 0;
    scanf("%d",&escola);
    int alunos[escola];
    for (int j=0;escola>j;j++) {
        scanf("%d",&alunos[j]);
    }
    for (int i=0; i<escola; i++) {
        int divisor = 0;
        divisor = alunos[i] % 3;
        total += alunos[i] - divisor;
    }
    printf("%d\n",total);

    return 0;
}