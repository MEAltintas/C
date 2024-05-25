#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Bir sayı giriniz: ");
    scanf("%100s",&str);
    
    int len=strlen(str);
    int palindrom=1;
    
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[len-1-i]){
            palindrom=0;
            break;
        }
    }
    if(palindrom){
        printf("%s bir palindromdur.\n",str);
    }
    else{
        printf("%s bir palindrom değildir.\n",str);
    }

    printf("Try programiz.pro");

    return 0;
}
