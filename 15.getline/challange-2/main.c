#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_LEN 80

int isPrime(int n) {
    if (n < 2) return 0;  // 0 e 1 non sono primi
    if (n == 2) return 1; // 2 è primo

    if (n % 2 == 0) return 0;  // Esclude i numeri pari (tranne 2)

    for (int i = 3; i <= sqrt(n); i += 2) {  // Controlla solo numeri dispari
        if (n % i == 0) return 0;  // Se è divisibile per i, non è primo
    }

    return 1;  // Se non ha trovato divisori, è primo
};


int main(){
FILE * file=fopen("read.txt","r");
if(file == NULL){
    printf("not file found ");
};
printf("hello i am ready ! \n");
char buffer[MAX_LEN];
while(fscanf(file,"%79s",buffer) == 1){
    if(atoi(buffer) % 2 == 0){
        printf("numeri pari : %s \n",buffer);
    }
    else{
        if(isPrime(atoi(buffer)) == 1){
            printf("is prime number : %s \n",buffer);
        }else{
        printf("numeri dispari : %s \n",buffer);
    };
}
};
return 0;

}