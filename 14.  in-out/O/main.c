#include <stdio.h>
#include <ctype.h>

int main (){
    printf("hello\n");
  /*   char c; 
    while((c = getchar()) != EOF ){   // write until use ctrl d to exit 
        putchar(c);
    }; */
    int ch = 0 ; 
    while(isspace(ch = (char)getchar())); //read as long as there are space 
    ungetc(ch,stdin); // put back the non space character 
    printf("char is %c\n",getchar());
    return 0 ; 
}