#include <stdio.h>
#include <setjmp.h>

jmp_buf buf; 

int handler(int number){
printf("handler called \n");
if(number == 1){// simulating an error like catch with others languages 
printf("simulating server error \n");
longjmp(buf,1);
}
else{
printf("will never be called \n");
return number;
}
};

int main (){
    printf("starting server \n");
    if (setjmp(buf) == 0 ){// this is like the try to other languages if setjmp > 0 should land to a error and exit the loop 
        int number = 1; 
        handler(number);
        printf("should never be called because the first call should land to an error\n");
        handler(number++);
    }
    printf("ending server \n");
    return 0; 
};

