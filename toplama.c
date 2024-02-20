#include <stdio.h>
int
main ()
{
  int x = 5, y = 6, z = 50;
  printf ("%d", x + y + z);  // % değer bir tamsayı değer yazmak içindir.
  printf ("\n...\n");
  x = y = z = 50;
  printf ("%d", x + y + z);

  return 0;
}
