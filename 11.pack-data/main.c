#include <stdio.h>
#include "../9.decimal_binary_converter_library/conversion.h"

struct packed_struct
{
  unsigned int :3 ;  // Padding di 3 bit (inutile, solo per allineamento)
  unsigned int f1:1;    // Flag per "acceso" (1 bit)
  unsigned int f2:1;    // Flag per "modalità TV" (1 bit)
  unsigned int f3:1;    // Flag per "modalità condizionatore" (1 bit)
  unsigned int type:8;// tv - device number 
  unsigned int index:18;// device id unique serial number 
};


int main (){
printf("hello");
    return 0; 
};

