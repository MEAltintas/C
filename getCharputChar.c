#include <stdio.h>

int main ()
{
    char ogrenci_notu;
    printf("Öğrencinin notunu giriniz: ");
    ogrenci_notu=getchar();  //getchar ile notu al ve ogrenci_notu değişkeninde sakla, sadece bir karakter alır.
    
    putchar(ogrenci_notu);  // putchar ile notu çıktı olarak ver
  return 0;
}
