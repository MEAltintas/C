#include <stdio.h>

int main() {
   int eklenecekSayi,eklenecekİndeks;
   int benimDizim[]={3,8,6,1,7,2,9,5,4};
   int boyut=sizeof(benimDizim) / sizeof(benimDizim[0]);
   
   for(int i=0; i<boyut; i++){
       printf("%d  ",benimDizim[i]);
   }
   
   printf("\nDiziye eklenecek sayıyı giriniz: ");
   scanf("%d ",&eklenecekSayi);
   printf("Sayının hangi indekse ekleneceğini belirtiniz: ");
   scanf("%d ",&eklenecekİndeks);
   
   for(int i=boyut-1; i>eklenecekİndeks; i--){
       benimDizim[i]=benimDizim[i-1];
   }
   benimDizim[eklenecekİndeks]=eklenecekSayi;
   
   for(int i=0; i<boyut; i++){
       printf("%d  ",benimDizim[i]);
   }
    return 0;
}
