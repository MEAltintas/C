#include <stdio.h>

int main() {
    int sayi;
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    if(sayi>0){
        printf("Sayı pozitifir.");
    }
    else if(sayi<0){
        printf("Sayı negatiftir.");
        
    }
    else{
        printf("Sayı sıfıra eşittir.");
    }

    return 0;
}
