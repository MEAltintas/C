#include <stdio.h>

int main() {
   int sayi;
   printf("Lütfen bir sayı değeri giriniz: ");
   scanf("%d",&sayi);
   if(sayi>0){
      printf("Pozitif");
   }
   if(sayi<0){
      printf("Negatif");
       
   }
   if(sayi==0){
       printf("Sayı 0'a eşittir.");
   }
    return 0;
}
