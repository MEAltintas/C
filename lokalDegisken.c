#include <stdio.h>

//Global değişken tanımlama
int g=20;

int main() {
    printf("g= %d\n",g);
    
    //Lokal değişken tanımlam. Lokal olan globali ezer,geçer.
    int g=10;
    printf("g= %d\n",g);
  
    return 0;
}
