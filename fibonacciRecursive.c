
#include <stdio.h>

int fibo(int n);

int main() {
    int n1=0,n2=1;
    printf("Fibonacci dizisindeki ilk kaç elemanın hesaplanmasını istersiniz?: ");
    int adet;
    scanf("%d",&adet);
    int n3,i;
    printf("%d %d",n1,n2);
    
    for(i=2; i<adet; i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
