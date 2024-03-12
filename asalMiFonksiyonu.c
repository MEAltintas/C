#include <stdio.h>
#include <math.h>

int asalMi(int sayi);

int main() {
    int sayi;
    
    printf("Bir sayı değeri giriniz: ");
    scanf("%d",&sayi);
    
    if(asalMi(sayi)){
        printf("%d Sayısı asaldır.\n",sayi);
    }
    else{
        printf("%d Sayısı asal değildir.\n",sayi);
    }
    return 0;
}
int asalMi(int sayi){
   for(int i=2; i<sayi; i++){
       if(sayi%i==0){
           return 0;
       }
   }
   return 1;
}

