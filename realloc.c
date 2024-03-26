#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,*isaretci,n1,n2;
    printf("Boyut giriniz: ");
    scanf("%d",&n1);
    
    isaretci=(int*)malloc(n1*sizeof(int));
    printf("Ayrılan ilk bellek adresleri:\n");
    for(i=0; i<n1; ++i){
        printf("%pc\n",isaretci+i);
    }
    printf("\nYeni boyut giriniz: ");
    scanf("%d",&n2);
    
    //yeniden bellek ayırma 
    isaretci=realloc(isaretci,n2*sizeof(int));
    printf("Ayrılan yeni bellek adresleri:\n");
    for(i=0; i<n2; ++i){
        printf("%pc\n",isaretci+i);
    }
    free(isaretci);
    
    return 0;
}
