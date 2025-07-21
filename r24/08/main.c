#include <stdio.h>

void	ft_ptr (int *ptr)
{
	*ptr = 42;
}

int main (){
int n; 
ft_ptr(&n);

printf("%d",n);
return(0);

}
