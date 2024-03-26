#include <stdio.h>

int x=10;
int y=50;

int main() {
    extern int y; // globalde ve lokalde aynı isimli olduğu için, extern olarak tanımlanmazsa değeri 0 olur
    printf("Global olan x değişkeninin değeri: %d\n" ,x);
    printf("Extern olan y değişkeninin değeri: %d" ,y);
  
    return 0;
}
