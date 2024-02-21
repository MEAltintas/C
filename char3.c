#include <stdio.h>

int main ()
{
  char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPRSTUVWXYZ";

  printf ("%D", strlen (ingiliz_alfabesi));
  printf ("\n...\n");
  printf ("%lu\n", sizeof (ingiliz_alfabesi));
  printf ("\n..................\n");


  char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
  printf ("%D", strlen (turk_alfabesi));
  printf ("\n...\n");
  printf ("%lu\n", sizeof (turk_alfabesi));
  printf ("\n..................\n");
  
  char deneme[50] = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
  printf ("%D", strlen (deneme));
  printf ("\n...\n");
  printf ("%lu\n", sizeof (deneme));

  return 0;
}
