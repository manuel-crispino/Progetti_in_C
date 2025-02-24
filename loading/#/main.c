#include <stdio.h>
#include <unistd.h> // Per usleep()

#define BAR_WIDTH 50  // Larghezza della barra

int main() {
    printf("Caricamento in corso...\n");

    for (int i = 0; i <= BAR_WIDTH; i++) {
        printf("\r[");
        
        // Stampa la parte completata con #
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        
        // Stampa la parte rimanente con spazi
        for (int j = i; j < BAR_WIDTH; j++) {
            printf(" ");
        }
        
        printf("] %d%%", (i * 100) / BAR_WIDTH);
        fflush(stdout);  // Forza l'aggiornamento della stampa
        
        usleep(50000);  // Aspetta 50 millisecondi (0.05s)
    }

    printf("\nCaricamento completato!\n");
    return 0;
}
