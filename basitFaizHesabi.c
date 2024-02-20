#include <stdio.h>

int main ()
{
  float ana_para,zaman,faiz_orani,faiz_miktari;
  printf("Ana para miktarını giriniz: ");
  scanf("%f",&ana_para);
  
  printf("Zamanı giriniz: ");
  scanf("%f",&zaman);
  
  printf("Faiz oranını giriniz: ");
  scanf("%f",&faiz_orani);
  
  faiz_miktari=(ana_para*zaman*faiz_orani)/100;
  printf("Basit faiz hesabı ile hesaplanan faiz miktarı: %f",faiz_miktari);

  return 0;
}
