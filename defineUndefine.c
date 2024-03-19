
#include <stdio.h>
#include <stdlib.h>
#define buyukSayi 1000000

int belirliİslemlerGerceklestir(int girdi){
    return (girdi<buyukSayi);
}
int main() {
    int ilkDegisken=20;
    int ikinciDegisken=25;
    int sonuc1,sonuc2;
    const int baskaBuyukSayi=1000000;
    
    printf("Büyük Sayı: %d\n",buyukSayi);
    
    sonuc1=(ilkDegisken<buyukSayi);
    printf("Sonuç 1: %d\n",sonuc2);
    
    #undef buyukSayi
    #define buyukSayi 30000000
    printf("Büyük Sayı: %d\n",buyukSayi);
 
    return 0;
}
