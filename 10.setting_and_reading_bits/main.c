#include <stdio.h>
#include "../9.decimal_binary_converter_library/conversion.h"
int main (){
    int numb = 0; 
    int position = 0; 
    printf("write the number \n");
    scanf("%d", &numb);
    printf("write which position you like to set ");
    scanf("%d", &position);
    int newNumber= numb | (1 << position);
      long long myConvertedBinaryNumber = decimalToBinary(numb);
      long long newNumbBinary = decimalToBinary(newNumber);
        printf("%d decimale convertito in = %lld binario\nposition %d = new number = %d\nbinary new number = %lld\n", numb, myConvertedBinaryNumber,position,newNumber,newNumbBinary);
    return 0; 
};

