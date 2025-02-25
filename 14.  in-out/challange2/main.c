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
   while (fgets(input,sizeof(input),fr) != NULL){
    for(int i = 0 ; input[i];i++){
        if(input[i] == ' '|| input[i] == '\n'){
           continue; // salta gli spazi e new line 
        };
        input[i]=toupper(input[i]);
        /* printf("%c\n",input[i]); */
    }
    lineCounter++;
    if (lineCounter < 10){
    printf(" %d: %s",lineCounter,input);
    }else{
        printf("%d: %s",lineCounter,input);
    }
   }
   printf("\n"); 
   fclose(fr);
   return 0;
}