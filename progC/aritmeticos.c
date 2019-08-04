#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    a = 1+1;
    printf("%d\n",a);
    a = 1-1;
    printf("%d\n",a);
    a = 1*1;
    printf("%d\n",a);
    a = 1/1;
    printf("%d\n",a);
    a = 1%1;
    printf("%d\n",a);
    a = 0;
    a++;
    printf("%d\n",a);
    a = 0;
    a--;
    printf("%d\n",a);
    a = 0;
    b = a++;
    printf("%d\n",b);
    a = 0;
    b = ++a;
    printf("%d\n",b);
    return 0;
}
