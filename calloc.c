#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,*isaretci,toplam=0;
    printf("Toplanacak eleman sayısını giriniz: ");
    scanf("%d",&n);
    
    isaretci=(int*)calloc(n,sizeof(int));
    
    // Bellek ayrımının başarısız olma durumunda
    if(isaretci==NULL){
        printf("Hata! Bellek ayırma işlemi başarısız oldu.");
        exit(0);
    }
    printf("Toplanacak elemanları giriniz:\n");
    for(i=0; i<n; ++i){
        scanf("%d",isaretci+i);
        toplam+=*(isaretci+i);
    }
    printf("Toplam = %d" ,toplam);
    
    //ayrılmış olan belleği serbest bırak
    free(isaretci);
    
    return 0;
}
