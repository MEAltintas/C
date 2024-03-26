#include <stdio.h>

int main() {
    register int i;
    int sayiDizisi[5]={8,10,12,14,16};
    for(i=0; i<5; i++){
        printf("sayiDizisi[%d] = %d\n",i,sayiDizisi[i]);
    }
    return 0;
}
