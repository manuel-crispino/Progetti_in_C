#include <stdio.h>
#include <stdlib.h>


struct s {
   int arraySize;// int = 4 byte 
   int array[];
};

int main (){
   int desiredSize = 5 ; 
    struct s *ptr;
    ptr = malloc(sizeof( struct s )+ desiredSize * sizeof(int));// 
    printf("ptr = %lu \n", sizeof(struct s));
    return 0;
}
