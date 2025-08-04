
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{	
	char *start;
	int len;
	int i; 
	
	len = 0; 
	i = 0; 	
	start = dest;
	while(dest[len] != '\0')
		len++;
	while(src[i] != '\0')
	{
		dest[len] = src[i];
		len++;		
		i++;
	};
	dest[len] = '\0';
	printf("start = %s \n", start);
	return(start);

}

int main ()
{	
	char dest[20]= "hello, "; 
	char src[] = "world";
	ft_strcat(dest, src); 
	return (0);
}
