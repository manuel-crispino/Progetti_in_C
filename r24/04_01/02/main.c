
#include <unistd.h>

typedef MAX_INT 2147483647;
typedef MIN_INT -2147483648;

void ft_putnbr(int nb)
{
	char c ;

	n = 10;	
	c = '0';
	while(nb == 0)
	{
		nb = nb / 10;	
		c = nb + '0';
		write(1, &c, 1);
	}
}

int main(void)
{	
	ft_putnbr(42);
	return (0);
}
