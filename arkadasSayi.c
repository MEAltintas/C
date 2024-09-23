#include <stdio.h>

int bölenlerToplamı(int sayi) {
    int toplam = 0;
    for (int i = 1; i <= sayi / 2; i++) {
        if (sayi % i == 0) {
            toplam += i;
        }
    }
    return toplam;
}

int main() {
    int sayi1, sayi2;

    printf("İki sayı girin: ");
    scanf("%d %d", &sayi1, &sayi2);

    if (bölenlerToplamı(sayi1) == sayi2 && bölenlerToplamı(sayi2) == sayi1) {
        printf("%d ve %d arkadaş sayılardır.\n", sayi1, sayi2);
    } else {
        printf("%d ve %d arkadaş sayılar değildir.\n", sayi1, sayi2);
    }

    return 0;
}
