#include <stdio.h>

int main ()
{
  float ana_para,zaman,faiz_orani,basit_faiz_miktari,bilesik_faiz_miktari;
  printf("Ana para miktarını giriniz: ");
  scanf("%f",&ana_para);
  
  printf("Zamanı giriniz: ");
  scanf("%f",&zaman);
  
  printf("Faiz oranını giriniz: ");
  scanf("%f",&faiz_orani);
  
  basit_faiz_miktari=(ana_para*zaman*faiz_orani)/100;
  printf("Basit faiz hesabı ile hesaplanan faiz miktarı: %f",basit_faiz_miktari);
  
  bilesik_faiz_miktari=ana_para*(pow((1+faiz_orani/100),zaman));
  printf("Bileşik faiz hesabı ile hesaplanan faiz miktarı: %f",bilesik_faiz_miktari);

  return 0;
}
