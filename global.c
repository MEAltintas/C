#include <stdio.h>

//Global değişken tanımlama
int g;

int main() {
    int a,b;
    
    a=10;
    b=15;
    g=a+b;
    
    printf("a = %d, b= %d g= %d\n",a,b,g);
    
    return 0;
}
