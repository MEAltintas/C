#include <stdio.h>
#include <math.h>

int main ()
{
  float taban, kuvvet, sonuc;
  printf ("Taban degeri giriniz: ");
  scanf ("%1f", &taban);
  printf ("Kuvvet degeri giriniz: ");
  scanf ("%1f", &kuvvet);

  sonuc = pow (taban, kuvvet);
  printf ("%.21f ^ %.21f = %.21f", taban, kuvvet, sonuc);

  return 0;
}
