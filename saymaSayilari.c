
#include <stdio.h>

int main() {
    int i ,n;
    printf("Üst sınırı giriniz: ");
    scanf("%d",&n);
    
    
    printf("1'den %d'ye kadar tüm sayma sayıları: \n ",n);
    for(i=1; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}
