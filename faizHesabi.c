#include<stdio.h>
#include<math.h>

int main(void){
    int p, n;
    float i;
    printf("Ana Para:");
    scanf("%d", &p);

    printf("Faiz Orani, yuzde:");
    scanf("%f", &i);

    printf("Vade:");
    scanf("%d",&n);
    //p*(i+1)**n
    float sonuc = pow(p*(1+(i/100)), n);
    printf("%f", sonuc);
    return 0;
    }
