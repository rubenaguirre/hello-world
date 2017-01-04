#include <18f4550.h>
#fuses XT,NOWDT,NOLVP
#use delay(clock=4M)

void main(){
    x=0;
    while(true){
        if(x==0){
            x++;
        }
        if(x>10){
            x=0;
        }
    }
}