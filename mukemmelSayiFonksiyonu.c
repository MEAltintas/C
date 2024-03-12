#include <stdio.h>
#include <math.h>

int mukemmelSayiMi(int sayi);

int main() {
    int sayi;
    
    printf("Bir sayı değeri giriniz: ");
    scanf("%d",&sayi);
    
    if(mukemmelSayiMi(sayi)){
        printf("%d Sayısı mükemmel sayıdır.\n",sayi);
    }
    else{
        printf("%d Sayısı mükemmel sayı değildir.\n",sayi);
    }
    return 0;
}
int mukemmelSayiMi(int sayi){
    int i,toplam,n;
    toplam=0;
    n=sayi;
    for(i=1; i<n; i++){
        if(n%i==0){
            toplam+=i;
        }
    }
    return (sayi==toplam);
   
}

