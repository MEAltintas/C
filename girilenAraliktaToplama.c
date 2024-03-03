
#include <stdio.h>

int main() {
    int i ,alt_sinir,ust_sinir,toplam=0;
    printf("Alt sınırı giriniz: ");
    scanf("%d",&alt_sinir);
    
    printf("Üst sınırı giriniz: ");
    scanf("%d",&ust_sinir);
;
    for(i=alt_sinir; i<=ust_sinir; i++){
       toplam+=i;
    }
    printf("%d ve %d arasındaki tüm sayma sayılarının toplamı : %d",alt_sinir,ust_sinir,toplam);
    return 0;
}
