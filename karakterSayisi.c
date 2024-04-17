#include <stdio.h>

int bg_count_char(char *str, char ch);

int main(void)
{
  printf("%d", bg_count_char("Bilgisayar", 'a'));

  return 0;
}

int bg_count_char(char *str, char ch)
{
  char *p = str;
  int id=0;

  while(*p++) if(*p==ch) id++;

  return id;
}
