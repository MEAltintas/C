#include <stdio.h>

int main()
{
     int i, n, kuptoplam, birler, onlar, yuzler;

 

  for (i = 1; i <= 999; i++)
  {
      yuzler=i/100;
     
      onlar= (i-yuzler*100)/10;
       
      birler = i-((yuzler*100)+(onlar*10));
      


    kuptoplam = (birler * birler * birler) + (onlar * onlar * onlar) + (yuzler * yuzler * yuzler);
   
    if (i == kuptoplam){
        printf ("-----------------------\n");
        printf ("%d\n",i);
  
    }
    
    
    }

}  
