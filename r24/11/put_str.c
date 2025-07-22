#include <stdio.h>
#include <unistd.h>

void print (char *str){
	int i = 0; 
	while(str[i]){
		write(1 , &str[i] , 1);
		i++;
	}	
}

int main (int argc ,char **argv)
{
if(argc < 2){
 printf("error : you must specify an argument;");
return 1;
}

print(argv[1]);
return(0);

}
