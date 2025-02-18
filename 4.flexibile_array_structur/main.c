#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cancel = -1; 
const int max_word_length = 20; 

struct shop {
    char item[max_word_length];
    char bucket[];
};

int check(){
    int input;
    printf("\033[0;34mWrite -1 to cancel your shopping list\nor\ninsert a number between 1 to 5 to see items\033[0m\n");
    while (scanf("%d", &input) != 1 ) {
        printf("\033[0;31mInvalid input. Please enter a number: \n");
        printf("Write -1 to cancel your shopping list\033[0m\n");
        while (getchar() != '\n');  // Svuota il buffer dell'input
    }
    return input;
}

int main(){
    const int max_items = 5;
    
    struct shop *ptr;
    
    // Allocazione dinamica della memoria per la struttura e il bucket
    ptr = malloc(sizeof(struct shop) + max_items * max_word_length * sizeof(char));
    if (!ptr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Chiediamo all'utente cosa vuole acquistare
    printf("What do you like to buy? \n");
    for (int i = 0; i < max_items; i++) {
        printf("Product number - %d: ", i + 1);
        scanf("%s", ptr->bucket + i * max_word_length);
    }

    // Stampa gli articoli acquistati
    printf("\nYou bought:\n");
    for (int i = 0; i < max_items; i++) {
        printf("-%s\n", ptr->bucket + i * max_word_length);
    }

    // Flag per uscire dal loop quando la lista è stata cancellata
    int listCancelled = 0;

    // Loop per gestire l'annullamento
    do {
          int input = check(); 
        // Verifica se l'utente ha scritto -1 per cancellare la lista
        if (input == cancel) {
            printf("Your list has been cancelled.\n");

            // Libera la memoria e segnala che la lista è stata cancellata
            free(ptr);
            listCancelled = 1;  // Imposta il flag per uscire dal loop
        }
        else if (input >= 1 && input <= 5){
            printf("item N: \033[0;32m%d\n-%s\033[0m\n",input,ptr->bucket+(input-1)*max_word_length);
             
        }
         else {
            printf("\033[0;31mInput not valid, please write a valid input.\033[0m\n\n");
              // Chiedi all'utente di scrivere -1 per cancellare
        }
    } while (!listCancelled);  // Continua fino a quando la lista è cancellata

    return 0;
}