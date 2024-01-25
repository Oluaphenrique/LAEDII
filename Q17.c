#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 int doseHoras(int h, int min, int sec){
    int dosehrs = 12 * 3600;
    int horaAtual = (h*3600)+(min*60)+sec;
  int tempoDecorrido = dosehrs - horaAtual;

    return tempoDecorrido;

}


int main(){

 int tempoDecorrido = doseHoras(15, 30,60);

printf("\nTempo decorrido: %i segundos", abs(tempoDecorrido));
}