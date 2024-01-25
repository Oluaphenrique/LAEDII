#include <stdio.h>
#include <stdlib.h>

int ackerman (m,n){
    if(m == 0){
        return n+1;
    } else if(m > 0 && n == 0){
        return ackerman(m-1,1);
    } else if(m > 0 && n > 0){
        return ackerman(m-1,ackerman(m,n-1));
    }
}


int main(){
    
    
}