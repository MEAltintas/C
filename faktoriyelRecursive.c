#include <stdio.h>

int factorial(int n);

int main() {
    int deger;
    printf("Bir değer giriniz: ");
    scanf("%d", &deger);
    
    printf("%d!=%d \n",deger,factorial(deger));

    return 0;
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*(factorial(n-1));
    }
}

