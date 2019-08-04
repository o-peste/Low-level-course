#include <stdio.h>
int main(){
    int a;
    a = 1 > 0 && 2 < 3;
    printf("%d\n",a);
    a = 1 == 1;
    printf("%d\n",a);
    a = ! 1 > 0 && 2 < 3;
    printf("%d\n",a);
}
