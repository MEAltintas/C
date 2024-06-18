#include <stdio.h>

int main(void) {
  int nota, notb, notc;
  printf("Birinci notu girin:");
  scanf("%d",&nota);
  printf("ikinci notu girin:");
  scanf("%d",&notb);
  printf("ucuncu notu girin:");
  scanf("%d",&notc);

  if ((nota>=60 && notb>=60) || (nota>=60 && notc>=60) || (notb>=60 && notc>=60) )
    printf("Gecti");
  else
    printf("Kaldı");
  return 0;
}
