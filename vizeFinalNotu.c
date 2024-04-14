
#include <stdio.h>
int main(void) {
  int vize, fnl;
  printf("Vize notunu giriniz: ");
  scanf("%d",&vize);

  printf("Final notunu giriniz: ");
  scanf("%d",&fnl);

  float ortalama = vize*0.4 + fnl*0.6;
  if (ortalama >= 60){
    printf("%f ortalama ile geçti", ortalama);
  }
  else{
    printf("%f ortalama ile kaldı", ortalama);
  }
  return 0;
}
