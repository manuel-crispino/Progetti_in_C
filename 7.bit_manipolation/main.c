#include <stdio.h>
int decimal = 0;
int decimal2 = 0 ; 
int bitwiseOperator(int n,int n2);
long long dconv(int n);
#include "dconv.h"

int main(){
    printf("write 2 decimal number\n");
    scanf("%d %d", &decimal , &decimal2);
    long long binary = dconv(decimal);
    long long binary2 = dconv(decimal2);
    printf("%d = %lld in binary\n",decimal, binary);
    printf("%d = %lld in binary\n",decimal2, binary2);
    bitwiseOperator(decimal2,decimal);
    return 0;
}

int bitwiseOperator( int n, int n2){
    int result = 0 ; 
    int result2 = 0;
   const char bitOp[] = {'~','>','<','&','|'};
    for (int i = 0 ; i < 5; i++){
    switch (bitOp[i]){
        case '~':
         result = ~n;
         result2 = ~n2;

         long long binary= dconv(result);
         long long binary2= dconv(result2);

        printf("~%d = %d (%lld)\n",n,result,binary);
         printf("~%d = %d (%lld)\n",n2,result2,binary2);
        break;
        case '>':
        result = n >> n2 ;
         printf("%d >> %d (%d)\n",n,n2,result);
       
         break;
        case '<':
            result = n << n2 ;
         printf("%d << %d (%d)\n",n,n2,result);
        
       break;
        case '&':
         result =n2 & n;
         

         binary= dconv(result);
        
         printf(" %d & %d %d (%lld)\n",n,n2,result,binary);
        
       break;
        case '|':
       
         result = n | n2 ;
         binary = dconv(n);
         binary2 = dconv(n2);
         long long resultB1 = binary | binary2;
        long long resultB = dconv(resultB1);
         printf("%d | %d (%d) %lld | %lld (%lld) \n",n,n2,result,binary,binary2,resultB);

        break;
    }}
    return 0 ; 
};

