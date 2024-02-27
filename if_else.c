#include <stdio.h>
#include <stdbool.h>


int main() {
   int sayi1,sayi2;
   printf("Lütfen iki sayı değeri giriniz: ");
   scanf("%d%d",&sayi1,&sayi2);
   if(sayi1>sayi2){
      printf("%d daha büyüktür.",sayi1);
   }
   if(sayi2>sayi1){
      printf("%d daha büyüktür.",sayi2);
       
   }
   if(sayi1==sayi2){
       printf("İki sayı eşittir.");
   }
    return 0;
}
