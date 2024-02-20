#include <stdio.h>
#include <math.h>

int main ()
{
  float sayi,karekok;
  printf ("Karekökü hesaplanacak sayıyı giriniz: ");
  scanf ("%1f", &sayi);

  karekok=sqrt(sayi);
  printf ("%.21f sayısının karekökü = %.21f", sayi,karekok);

  return 0;
}
