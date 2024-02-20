#include <stdio.h>
int main ()
{
  float cm,metre,km;
  printf("Uzunluğu santimetre cinsinden giriniz: ");
  scanf("%f",&cm);
  
  metre=cm/100.0;
  km=cm/100000.0;
  
  printf("Metre cinsinden uzunluk: %.2f m \n",metre);  // %.2f=noktadan sonra iki basamak yazdırır.
  printf("Kilometre cinsinden uzunluk: %2.f km",km);
  return 0;
}
