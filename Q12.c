#include <stdio.h>


void decimalParaRomano(int num) {
    int decimais[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* romanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    
    for (int i = 0; num > 0; i++) {
       
        while (num >= decimais[i]) {
        printf("%s", romanos[i]);
        num -= decimais[i];
        }
    }
}

int main() {
   
    for (int i = 1; i <= 100; i++) {
        
        printf("%3d: ", i);
        
        decimalParaRomano(i);
        
        printf("\n");
    }

    return 0;
}
