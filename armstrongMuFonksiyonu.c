#include <stdio.h>
#include <math.h>

int sayiArmstongMu(int sayi);

int main() {
    int sayi;
    
    printf("Bir sayı değeri giriniz: ");
    scanf("%d",&sayi);
    
    if(sayiArmstongMu(sayi)){
        printf("%d Sayısı armstrongdur.\n",sayi);
    }
    else{
        printf("%d Sayısı armstrong değildir.\n",sayi);
    }
    return 0;
}
int sayiArmstongMu(int sayi){
   int sonBasamak,toplam,orijinalSayi,basamakSayisi;
   toplam=0;
   orijinalSayi=sayi;
   basamakSayisi=(int) log10(sayi)+1;
   
   while(sayi>0){
       sonBasamak=sayi%10;
       toplam=toplam+round(pow(sonBasamak,basamakSayisi));
       sayi=sayi/10;
       return (orijinalSayi==toplam);
   }
}

