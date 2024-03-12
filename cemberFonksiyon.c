#include <stdio.h>
#include <math.h>

float cemberCapiHesapla(float yaricap);
float cemberCevreHesapla(float yaricap);
float daireAlanHesapla(float yaricap);

int main() {
    float yaricap,cap,cevre,alan;
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f",&yaricap);
    
    cap=cemberCapiHesapla(yaricap);
    cevre=cemberCevreHesapla(yaricap);
    alan=daireAlanHesapla(yaricap);
    
    printf("Çemberin çapı: %.2f birimdir \n",cap);
     printf("Çemberin çevresiı: %.2f birimdir \n",cevre);
      printf("Dairenin alanı: %.2f birim karedir ",alan);
    return 0;
}

float cemberCapiHesapla(float yaricap){
    return (2*yaricap);
}

float cemberCevreHesapla(float yaricap){
    return (2*M_PI*yaricap);
}
float daireAlanHesapla(float yaricap){
    return (M_PI*yaricap*yaricap);
}
