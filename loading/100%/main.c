#include <stdio.h>
#include <unistd.h>

int main (){

    for(int i = 0 ; i < 100 ; i++){
        printf("\rcaricamento in corso... %d%%",i+1);
        fflush(stdout);
        usleep(90000);
    }
    printf("\n completato\n");

    return 0 ;
}