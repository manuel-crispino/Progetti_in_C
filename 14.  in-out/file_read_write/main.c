#include <stdio.h>

int main (){
  FILE *textRead = fopen("./text.txt","r");
  FILE *textWrite = fopen("textWrite.txt","w");
 if ( textRead == NULL || textWrite == NULL){
        printf("Error opening file \n");
        perror("Error");
        return 1 ;
 }

 int ch ; 
 printf("loading...\n");
 while((ch = fgetc(textRead)) != EOF){
        fputc(ch,textWrite);
 }
 printf("file Copied Successfully\n");
fclose(textRead);
fclose(textWrite);   
    return 0; 
}