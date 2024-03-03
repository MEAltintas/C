
#include <stdio.h>

int main() {
    int i ,n,toplam=0;
    printf("Üst sınırı giriniz: ");
    scanf("%d",&n);
;
    for(i=1; i<=n; i++){
       toplam+=i;
    }
    printf("Girilen %d'ye kadar tüm sayma sayılarının toplamı : %d",n,toplam);
    return 0;
}
