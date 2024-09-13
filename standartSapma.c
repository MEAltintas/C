#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main()
{
srand(time(NULL));
int i,t=0,boyut;
printf("Eleman Sayisi : ");
scanf("%d",&boyut);
int x[boyut];
float x_ort,std;
for(i=0;i<boyut;i++)
{
x[i] = rand()%10;
printf("%2d",x[i]);
t += x[i];
}
printf("\nDizi Toplam : %d \n",t);
x_ort = (float)t/i;
printf("\nDizi Ortalama : %.2f \n",x_ort);
t=0;
for(i=0;i<boyut;i++)
{
t += pow((x[i]-x_ort),2);
}
std = sqrt(t/(i-1));
printf("\nStandart Sapma : %.2f",std);
getch();
}
