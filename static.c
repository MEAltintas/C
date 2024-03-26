#include <stdio.h>

void degerArtir(int k){
    static int i=0;
    printf("%d ",i);
    i+=k;
}

int main() {
   degerArtir(2);
   degerArtir(2);
   degerArtir(2);
   degerArtir(2);
    return 0;
}
