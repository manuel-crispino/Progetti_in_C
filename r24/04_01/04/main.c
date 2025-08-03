#include <unistd.h>
//#include <limits.h>
#include <stdlib.h>

//int is_double(char *base, int i)
//{	
//	int j; 
//	
//	j = i + 1;
//	while (base[j] != '\0')
//	{
//		if (base[i] == base[j])
//			return(1);
//		j++;
//	}
//	return (0);
//}

int ft_is_hex(char *base) 
{
	int i;
	char *hex;
	char *hex_big;
	int	j;

	j = 0;
	i = 0;
	hex = "0123456789abcdef";
	hex_big = "0123456789ABCDEF";
	while(base[i] != '\0')
	{
		i++;
		if ((base[i] != hex[i]) 
		&& (base[i] != hex_big[i]))
			return (0);
		else
			j++;
	}
	if (j != i)
		return(0);
	return (1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		i++;
		if (s1[i] == s2[i])
			j++;
	}
	if (i == j)
		return(1);
	return (0);
}

int last_check(char *base)
{
	char *oct;
	char *dec;
	char *bin;
	
	dec = "0123456789";
	oct = "012345678";
	bin = "01";	
	if (ft_strcmp(base, bin))
		return (1);				
	if (ft_strcmp(base, oct))
		return (1);				
	if (ft_strcmp(base, dec))
		return (1);
	if (ft_is_hex(base))
		return(1);				
	return (0);
}



//int is_valid(char *base, int base_type)
//{
//	int i;
//	
//	i = 0;
//	if (base_type < 1)
//		return 0;
//	while (base[i] != '\0')
//	{
//		if (!ft_check_base_type(base, i))		
//			return (0);
//		if (!is_double(base, i))
//			return(0);
//		i++;
//	}
//	basecpy[i] = '\0';
//	if(!last_check(base))
//		return (0);
//	return (1);
//}

int ft_len(char *base)
{
	int len; 

	len=0;
	while(base[len] != '\0')
		len++;
	return (len);
}

void ft_putnbr_base( int nbr, char *base)
{
	int base_type;
	
	base_type=ft_len(base);
	if (!last_check(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);	
		return;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_type)
		ft_putnbr_base(nbr / base_type, base);		
	write(1, &base[nbr % base_type], 1);
}


int main (int argc, char **argv)
{
	(void)argc;
	int arg1 = atoi(argv[1]);
	//(void)argv;		
	//printf("%d\n",INT_MIN);
	ft_putnbr_base(arg1,argv[2]);
	
	return (0);
}
