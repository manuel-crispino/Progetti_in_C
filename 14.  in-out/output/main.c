#include <stdio.h>

void next() {
    int c;

    printf("Inserisci un carattere: ");
    c = getchar(); // Legge un carattere dallo standard input
    printf("Hai inserito: ");
    putchar(c); // Stampa il carattere letto
    printf("\n");
    // Ignora il carattere di nuova linea
    if (c != '\n') {
        int temp;
        while ((temp = getchar()) != '\n' && temp != EOF);
    }

    ungetc(c, stdin); // Rimette il carattere nello stream di input
    printf("Rileggendo il carattere: ");
    c = getchar(); // Legge di nuovo il carattere
    putchar(c); // Stampa di nuovo il carattere
    printf("\n");

    return;
}

int main() {
    int c;

    printf("Inserisci un carattere: ");
    c = getchar(); // Legge un carattere dallo standard input
    printf("Hai inserito: ");
    putchar(c); // Stampa il carattere letto
    printf("\n");

    // Ignora il carattere di nuova linea
    if (c != '\n') {
        int temp;
        while ((temp = getchar()) != '\n' && temp != EOF);
    }

    next();
    return 0;
}