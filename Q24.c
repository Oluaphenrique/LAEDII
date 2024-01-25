#include <stdio.h>
#include <stdlib.h>

int somatorio(int i, int n){

    if(i == n){
        return n;
    }
  
    return i+somatorio(i+1,n);
}

int main (){

int soma = somatorio(1,10);
printf("%i", soma);
}