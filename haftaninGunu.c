#include <stdio.h>

int main() {
 int gun;
 printf("Günün,haftanın kaçıncı günü olduğunu giriniz: ");
 scanf("%d",&gun);
 
 if(gun==1){
     printf("Pazartesi");
 }
 else if(gun==2){
     printf("Salı");
 }
 else if(gun==3){
     printf("Çarşamba");
 }
 else if(gun==4){
     printf("Perşembe");
 }
 else if(gun==5){
     printf("Cuma");
 }
 else if(gun==6){
     printf("Cumartesi");
 }
 else if(gun==7){
     printf("Pazar");
 }
 else{
     printf("1-7 arasında geçerli sayı giriniz");
 }
  
  return 0;
}
