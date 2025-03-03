#include <stdio.h>
#include <ctype.h>
#define MAX_BUFFER 1000

int main (){
    printf("server start\n");
   char input[MAX_BUFFER];
    FILE *fr;
    fr = fopen("read.txt","r");
   if (fr == NULL){
    perror("error : ");
    return 1;
   };
   int lineCounter = 0 ;
   while (fgets(input, sizeof(input), fr) != NULL) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ' && input[i] != '\n') {
            input[j] = toupper(input[i]);   
            j++;
        };
    };
    input[j] = '\0'; // IMPORTANTE: termina la stringa modificata
    lineCounter++;
    printf("%2d: %s\n", lineCounter, input);
    }
   printf("\n"); 
   fclose(fr);
   return 0;
}