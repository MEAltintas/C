
#include <stdio.h>

int main() {
    int n,i;
    float toplam=0.0, ortalama;
    printf("Kaç sayı gireceksiniz: ");
    scanf("%d",&n);
    
    float sayi[n];
    printf("Sayıları girin: \n");
    for(i=0;i<n;++i){
        printf("%d. sayı: ",i+1);
        scanf("%f",&sayi[i]);
        toplam+=sayi[i];
    }
    ortalama=toplam/n;
    printf("Sayıların ortalaması: %.2f\n",ortalama);

    return 0;
}
