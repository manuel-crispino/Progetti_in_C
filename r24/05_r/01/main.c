#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb)
{	
	if(nb < 0)	
		return (0);
	if (nb == 1 || nb == 0)
		return	(1);
	return (nb * ft_recursive_factorial( nb - 1 ));
}

int main (int argc, char **argv )
{
	(void)argc;
	int nb = atoi(argv[1]);
	printf("resutl = %d \n",ft_recursive_factorial(nb));
	return (0);
}
