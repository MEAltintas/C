#include <stdio.h>

int main ()
{
    float boy,en,cevre,alan;
    printf("Dikdörtgenin uzunluğunu giriniz: ");
    scanf("%f",&boy);
     printf("Dikdörtgenin genişliğini giriniz: ");
    scanf("%f",&en);
    
    cevre=2*(boy+en);
    printf("Dikdörtgenin Çevresi: %f",cevre);
    
    alan=boy*en;
    printf("Dikdörtgenin Alanı: %f",alan);
    
  return 0;
}
