#include <stdio.h>

int main(){
    int a = 0;
    a = 3;
    printf("%d\n",a);
    a = 0;
    a += 3;
    printf("%d\n",a);
    a = 0;
    a -= 3;
    printf("%d\n",a);
    a = 0;
    a *= 3;
    printf("%d\n",a);
    a = 0;
    a /= 3;
    printf("%d\n",a);
    a = 0;
    a &= 1;
    printf("%d\n",a);
    a = 0;
    a |= 1;
    printf("%d\n",a);
    a = 0;
    a ^= 1;
    printf("%d\n",a);
    return 0;
}
