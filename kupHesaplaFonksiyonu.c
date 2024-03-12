#include <stdio.h>
#include <math.h>

int sayininKubunuHesapla(int sayi);

int main() {
    int sayi;
    int c;
    
    printf("Bir sayı değeri giriniz: ");
    scanf("%d",&sayi);
    
    c=sayininKubunuHesapla(sayi);
    printf("%d sayısının kübü: %d",sayi,c);
    
    return 0;
}
int sayininKubunuHesapla(int sayi){
    return (sayi*sayi*sayi);
}

