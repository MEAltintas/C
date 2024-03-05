#include <stdio.h>

int main() {
   int benimDizim[]={3,8,1,7,2,9,5,4};
   int enBuyuk_deger=benimDizim[0];
   int konum=0;
   int boyut=sizeof(benimDizim) / sizeof(benimDizim[0]);
   
   for(int i=0; i<boyut; i++){
       if(benimDizim[i]>enBuyuk_deger){
           enBuyuk_deger=benimDizim[i];
           konum=i;
       }
   }
    printf("Dizinin en büyük değeri, %d indeksli konumda bulunan %d değeridir.\n",konum,enBuyuk_deger);
  return 0;
}
