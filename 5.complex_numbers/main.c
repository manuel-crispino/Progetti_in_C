#include <stdio.h>
#include <complex.h>
#include <unistd.h> 

int main() {
    int width = 10;  // Larghezza del quadrato
    int height = 10; // Altezza del quadrato

    for (int y = 0; y <= height; y++) { // Ciclo verticale (parte immaginaria)
        for (int x = 0; x <= width; x++) { // Ciclo orizzontale (parte reale)
            // Coordinate del punto complesso
            double complex z = x + y * I;

            // Disegna i bordi del quadrato
            if (y == 0 || y == height || x == 0 || x == width) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Vai a capo dopo ogni riga
    }

    return 0;
}
   
