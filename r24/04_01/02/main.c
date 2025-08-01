
#include <unistd.h>
#include <limits.h>

void ft_putnbr(int nb)
{	
	char c = '0';
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648",11);
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);	
        } 
	if ( nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{	
	ft_putnbr(-2147483648);
	write(1," ",1);
	ft_putnbr(-247483648);
	return 0; 
}
