#include <stdio.h>


void exibirRetangulo(int lado1, int lado2) {
   
    for (int i = 0; i < lado1; i++) {
        
        for (int j = 0; j < lado2; j++) {
            
            printf("* ");
        }
        
        printf("\n");
    }
}

int main() {
    
    exibirRetangulo(4, 5);

    return 0;
}
