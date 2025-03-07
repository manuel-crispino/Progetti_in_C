#include <stdio.h>
#include <stdlib.h>

int freeBuffer (char *buffer,size_t bufsize,size_t characters){
    printf("Memory allocated: %zu bytes\n", bufsize);
    printf("Memory used: %zu bytes\n", characters);
    printf("Memory used: %zu bit\n", characters*8);
    printf("Memory remaining: %zu bytes\n", bufsize - characters);
    free(buffer);
    buffer=NULL;// riassegnare buffer Null evita imprevisti e protegge 
    printf("buffer is now free\n");
    return 0; };

int main (){
char *buffer = NULL;
size_t bufsize = 32;
size_t characters;

buffer = (char *)malloc(bufsize * sizeof(char));

if(buffer == NULL){
    exit(1);
};
    printf("Type something\n");
    characters =  getline(&buffer,&bufsize,stdin); // assegniamo character
// getline() rialloca la memoria in automatico evitando bufoverflow ma puo creare problemi memoria . 
    if(characters >= 32){
        printf("too many characters error: overflow\n");
        freeBuffer(buffer, bufsize, characters);
        buffer = NULL; // Evita che venga liberato di nuovo
        exit(1);
    }
    printf("\n%zu characters where read \n",characters);
    printf("\nyou typed : %s\n",buffer);
    if (buffer != NULL) { // Controllo per evitare doppio free
        freeBuffer(buffer, bufsize, characters);
    }
};