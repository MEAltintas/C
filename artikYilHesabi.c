#include <stdio.h>

int main() {
    int yil;
    printf("Yıl değerini giriniz: ");
    scanf("%d",&yil);
    if(((yil%4==0) && (yil%100!=0)) || (yil%400==0)){
        printf("Artık Yıl");
    }
    else{
        printf("Artık Yıl değil");    }

    return 0;
}
