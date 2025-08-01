#include <stdio.h>

int ft_strlen(char *str)
{
	int i; 
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main ()
{
	int len  = 0;
	char str[]="hello";
	len  = ft_strlen(str);
	printf("this is len = %d ",len );
	return (0);
}
