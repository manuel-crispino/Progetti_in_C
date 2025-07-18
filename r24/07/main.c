#include <unistd.h>

void print(int c){
if (c == -1){
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
	int end = 1;
	int call= 0;
	int line_end = -1;
	while(end == 0)
	{
		if (call == 1)
		{	print(line_end);
			call = 0; //call \n
			i = 0;	//x_asse
			j++;	//y_asse
			if(i==x && j ==y){
			end = 0;
			}
		}
		while(call == 1)
		{
			if(i == 0 || i == x && j == 0  )
			{
				print(o);
			}
			if(i == x+1){call = 1;}
			if(j == 0 || j == y)
			{
				print(minus);
			}
			else if(j > 0 && j != y && i == x)
			{
				print(pipe);
			}
			else
			{
			 print(12);//asci not visibile	
			};
		i++;
		}
	} 
}

int main(){
	rush(5,10);
return (0); 
}
