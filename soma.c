#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL,"");
     int x, y; 
     printf("Digite dois numeros inteiros:");
     scanf("%lld %lld" , &x, &y);
     printf("O numero %lld multiplicado por 4 bilhões e %lld", x, x * 4000000000);
     printf("O numero %lld multiplicado por 4 bilhões e %lld", x, x * 4000000000);
     return 0;
}
