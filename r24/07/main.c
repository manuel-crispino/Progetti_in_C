#include <unistd.h>

void print(int c){
if ( c == -1){
char nc='\n';
write(1,&nc,1);
}
else{
write(1, &c, 1 );
}
}

void rush(int x , int y){
	int o = 111; //ascii for o 
	int minus = 45; //ascii for -
	int pipe = 124;// asci  for |
	int i = 0;
	int j = 0; 
	int endX = x-1;
	int end = 1;
	int line_end = -1;
	while (i <= y)
	{
		while( j <= x)
		{	
			if( j <= endX && i < 0 && i > y)
			{
				print(minus);
			}
			if(i > 0 && i < y){
				if(j ==  0 || j == endX)
				{
					print(pipe);
				}
				if( i > 0 && i < y && j > 0 && j < endX)
				{
				print(12);
				};
			}
			if(j == x)
			{
			  	print(line_end);
			}
		j++;
		}
		i++;
		j=0;
	}
}

int main(){
	rush(5,10);
return (0); 
}
