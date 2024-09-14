#include <stdio.h>

int main() {
    int dizi[] = {2, 3, 5, 3, 7, 2, 8, 5, 3, 7};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int sayildi[boyut];  // Elemanların sayılıp sayılmadığını takip etmek için dizi
    int i, j, sayac;

    // sayildi dizisini başlangıçta 0 olarak ayarlıyoruz
    for (i = 0; i < boyut; i++) {
        sayildi[i] = 0;
    }

    printf("Tekrar eden elemanlar ve tekrar sayıları:\n");

    // Her bir elemanı kontrol ediyoruz
    for (i = 0; i < boyut; i++) {
        if (sayildi[i] == 1) {
            continue; // Daha önce sayıldıysa atla
        }

        sayac = 1; // Kendisi bir defa sayıldığı için 1 ile başlatıyoruz

        for (j = i + 1; j < boyut; j++) {
            if (dizi[i] == dizi[j]) {
                sayac++;
                sayildi[j] = 1; // Bu eleman artık sayılmıştır
            }
        }

        if (sayac > 1) {
            printf("%d sayisi %d defa tekrar etti.\n", dizi[i], sayac);
        }
    }

    return 0;
}
