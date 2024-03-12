#include <stdio.h>
#include <math.h>

// Sayı çiftse =1 tekse= 0

int sayiCiftMi(int sayi){
    if(sayi%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int sayi;
    printf("Bir sayı değeri giriniz: ");
    scanf("%d",&sayi);
    if(sayiCiftMi(sayi)){
        printf("Çift sayıdır");
    }
    else{
        printf("Tek sayıdır");
    }
    
    return 0;
}

