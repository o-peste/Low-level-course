#include <stdio.h>

// Estas operações estão retornando valores numéricos
// Não verdadeiro e falso
int main(){
    int a;
    a = 1 & 0;
    printf("%d\n",a);
    a = 1 | 0;
    printf("%d\n",a);
    a = 1 ^ 0;
    printf("%d\n",a);
    a = 0 << 1;
    printf("%d\n",a);
    a = 0 >> 1;
    printf("%d\n",a);
    a = ~0;
    printf("%d\n",a);
    return 0;
}
