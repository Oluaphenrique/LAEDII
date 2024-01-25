#include <stdio.h>
#include <math.h>


void calcularRaizesReais(int a, int b, int c) {
   
    int discriminante = b * b - 4 * a * c;

   
    if (discriminante >= 0) {
       
        double raiz1 = (-b + sqrt(discriminante)) / (2.0 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2.0 * a);

       
        printf("Raiz 1: %.2lf\n", raiz1);
        printf("Raiz 2: %.2lf\n", raiz2);
    } else {
        
        printf("A funcao nao tem raizes reais.\n");
    }
}

int main() {
    int a, b, c;

    
    printf("Digite os coeficientes a, b e c (separados por espacos): ");
    scanf("%d %d %d", &a, &b, &c);

    
    calcularRaizesReais(a, b, c);

    return 0;
}
