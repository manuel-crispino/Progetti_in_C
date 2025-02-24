#include <stdio.h>

int checkString(char string[], char string2[]){
       int i= 0 ; 
       if (string[i] == ' ' || string[i] == '\n' || string[i] == '\0'){
              printf("string is empty\n");
              return 1; 
       }
       while (string[i] != '\0') {
              if (string[i] == '\n') { // fget() aggiunge newline \n alla fine quidni e importante rimuoverla prima di procedere
                  string[i] = '\0';// cambia \n con fine parola \0
                  break;
              }
              i++;
          }
          i = 0 ; 
           // Resetto i per il confronto
           while (string[i] != '\0' && string2[i] != '\0') {
              if (string[i] != string2[i]) {
                  printf("not valid input!\n");
                  return 1;
              }
              i++;
          }
      
          // Controllo che entrambe le stringhe siano terminate nello stesso punto
          if (string[i] == '\0' && string2[i] == '\0') {
              printf("strings are equal\n");
              return 0;
          } else {
              printf("strings are not equals\n");
              printf("%c != %c\n",string[i],string2[i]);
              return 1;
          }
       printf("strings are equals\n"); 
       return 0;
};


int handleChar(){
char input[1000]; // Buffer limit per input ; 
int Inword = 0 ; 
int charCount = 0;
int wordCount = 0; 
printf("Inserisci Testo \n");
fgets(input,sizeof(input),stdin);
int i = 0 ; 
if(input[i] == ' ' || input[i] == '\n'){
       printf("no text found ");
       return 1;
}
for( i = 0 ;input[i] != '\0'; i++){
if( input[i] != ' ' && input[i] != '\n'){
             charCount++; 
       }
if( (input[i] != ' ' && input[i] != '\n') && Inword == 0){
       Inword= 1 ; 
       wordCount++; 
  }
  else if ((input[i] == ' ' || input[i] == '\n') && Inword == 1){
       Inword = 0 ; 
  }; 

}
printf("total char is : %d\n",charCount);
printf("total words is : %d\n",wordCount);
return 0 ; 
};

int handleText(){
       char input[1000]; // Buffer limit per input ; 
       int inWord = 0 ; 
       int charCount = 0;
       int wordCount = 0; 
       FILE *fr;
       fr = fopen("test.txt","r");
       if(fr == NULL ){
              perror("errore : ");
              return 1;
       };
       int countLine = 0;
       printf("\n"); // better readability
       while (fgets(input,sizeof(input),fr)!= NULL){
              int i = 0 ; 
       while (input[i] != '\0'){
              if(input[i] != ' ' || input[i] != '\0'){
                     charCount++;
              }
                  // Conta parole
            if ((input[i] != ' ' && input[i] != '\n') && inWord == 0) {
              inWord = 1;
              wordCount++;
          } 
           if ((input[i] == ' ' || input[i] == '\n') && inWord == 1) {
              inWord = 0;
          }
          i++;
       };
       countLine++;
       printf("%d ) Riga letta: %s\n",countLine,input);
       };
       fclose(fr);
       printf("\ntotal char is : %d\n",charCount);
       printf("total words is : %d\n",wordCount);
       return 0 ; 
       };


int main (){
char comand[1000];
char consoleOut[10] = "./a.out";
char expectedOutput[1000] = "./a.out test.txt";
printf("Inserisci comando \n\n");
fgets(comand, sizeof(comand),stdin);
int checkText = checkString(comand,expectedOutput);
int check ;
if(checkText != 0){
 check = checkString(comand,consoleOut);
};
if(checkText == 0){
handleText();
}
else if(check == 0){
handleChar();
};
       return 0 ; 
}