#include <unistd.h>

char ft_putc(char c){
return write(1,&c,1);
};

void ft_alphabet(void){
char i = 'a' ; 

while(i <= 'z'){
ft_putc(i);
i++;
}
};

int main(){
ft_alphabet();
return 0;
};
