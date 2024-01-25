#include <stdio.h>
#include <math.h>


int temRaizesReais(int a, int b, int c) {
    
    int discriminante = b * b - 4 * a * c;

   
    if (discriminante >= 0) {
        return 1; // Retorna 1 se tem raízes reais
    } else {
        return 0; // Retorna 0 se não tem raízes reais
    }
}

int main() {
    int a, b, c;

    
    printf("Digite os coeficientes a, b e c (separados por espacos): ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (temRaizesReais(a, b, c)) {
        printf("A funcao tem raizes reais.\n");
    } else {
        printf("A funcao nao tem raizes reais.\n");
    }

    return 0;
}
