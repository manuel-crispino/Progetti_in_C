
#include <stdio.h>


long long dconv(int decimal){
    long long binary = 0 ; 
    int position = 1; 
    int tn = 0;
 while(decimal > 0 ){
     tn = decimal % 2 ; 
     binary += tn * position;
     position *= 10 ; 
     decimal /= 2 ; 
 }
return binary;
}