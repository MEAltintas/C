
#include <stdio.h>


int main ()
{
  int sayi=10;
  int*isaretci;
  
  isaretci=&sayi;
  printf("Sayı değişkeninin adresi: %d\n",&sayi);
  printf("Sayı değişkeninin içeriği: %d\n",sayi);
  
  printf("İşaretçi değişkeninin adresi: %d\n",&isaretci);
  printf("İşaretçi değişkeninin içeriği: %d\n",isaretci);
  printf("İşaretçi değişkeninin işaret ettiği değer: %d\n",*isaretci);
  
  return 0;
}
