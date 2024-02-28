
#include <stdio.h>

int main() {
    int gun;
    printf("Günün haftanın kaçıncı günü olduğunu giriniz: ");
    scanf("%d",&gun);
    switch(gun)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Hafta içi");
            break;
        case 6:
        case 7:
            printf("Hafta sonu");
            break;
        default:
            printf("1-7 arasında gün giriniz.");
    }
  return 0;
}
