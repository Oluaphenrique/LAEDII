#include <stdio.h>
#include <stdlib.h>


int somaDeInteiro(int n){
    int soma = 0, aux;
    
    while(n > 0){
        soma += n%10;
        n = n /10; 
    }
    return soma;
}

int main(){

somaDeInteiro(7631);

}