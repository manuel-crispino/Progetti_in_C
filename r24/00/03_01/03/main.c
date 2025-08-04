
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	 		*start;
	unsigned int 		i;
	int			len; 
	
	len=0;
	i=0;	
	start = dest;
	
	while(dest[len] != '\0')
		len++;
	while(i < nb && src[i] != '\0')
		dest[len++] = src[i++];
	dest[len]= '\0';
	return(start);
}


int main ()
{ 	
	char s1[30]= "hello, ";
	char s2[]= "world ";
	unsigned int	size;
	
	size = sizeof(s1);
	ft_strncat(s1,s2,size);
	printf("s1 == %s",s1);	
	return 0 ;
}
