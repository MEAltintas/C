#include <stdio.h>
#include <string.h>

// enum numaralandırılmış tipler,sadece belirli değerler alabilen bir listeden seçilmiş değerler haricinden başka değerler alamayan yapılardır.
// eğer aşağıda tanımladığımız DUSUK... değer vermiyorsak 0 1 2 diye kendi sırayla değer atar.
// eğer DUSUK=12 dersem diğerlerinide sırayla 13 14 yapar.


enum Seviyeler{
    DUSUK,
    ORTA,
    YUKSEK
};

int main ()
{
  enum Seviyeler OdaSicakligi=DUSUK;
  printf(" %d",OdaSicakligi);

  return 0;
}
