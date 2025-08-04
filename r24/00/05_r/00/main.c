#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nbr)
{
	int result; 
	
	result = 1;
	if (nbr < 0)
		return (0);
	while(nbr > 1)
	{
		result *= nbr;
		nbr--;
	}
	return (result);	
}

int main(int argc,char **argv)
{
	(void)argc;	
	int nbr= atoi(argv[1]);
	int result = ft_iterative_factorial(nbr);
	printf("nr = %d \n",result);
	return (0);
}
