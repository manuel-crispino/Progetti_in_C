#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *word = NULL;
    size_t bufsize = 32; 
    size_t character;
    char *filename = NULL;
    FILE *file; 
    char line[256];

    // Allocazione della memoria per la parola e il nome del file
    word = (char *)malloc(bufsize * sizeof(char));
    filename = (char *)malloc(bufsize * sizeof(char));

    // Leggere la parola da cercare
    printf("Write the word to search: ");
    character = getline(&word, &bufsize, stdin);
    word[strcspn(word, "\n")] = 0;  // Rimuovere newline

    // Leggere il nome del file
    printf("Write file name: ");
    getline(&filename, &bufsize, stdin);
    filename[strcspn(filename, "\n")] = 0;  // Rimuovere newline

    // Aprire il file
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        free(word);
        free(filename);
        return 1;
    }

    // Leggere il file riga per riga
    while (fgets(line, sizeof(line), file)) {
        // Suddividere la riga in parole usando strtok
        char *token = strtok(line, " \t\n");  // Delimitatori: spazio, tabulazione, newline

        // Ciclo attraverso tutte le parole della riga
        while (token != NULL) {
            // Confrontare ogni parola con la parola da cercare
            if (strstr(token, word)) {
                printf("Found the word '%s' in: %s\n", word, line);
                break;  // Esci se la parola è trovata
            }
            token = strtok(NULL, " \t\n");  // Continua con la prossima parola
        }
    }

    // Chiudere il file e liberare la memoria
    fclose(file);
    free(word);
    free(filename);

    return 0;
}
