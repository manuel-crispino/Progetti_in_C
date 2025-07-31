#include <stdio.h>

static unsigned int	my_len(char *str)
{ 
	unsigned int i;

	i = 0; 
	while (str[i] != '\0' )
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len; 
	unsigned int	i;
	unsigned int	tot_len;
	
	tot_len = 0;
	len = 0;
	i = 0; 
	len = my_len(dest);
	i = my_len(src);
	tot_len = len + i;
	if(size <= len)
		return (size + i);
	i = 0;
	while (src[i] != '\0' && len < size - 1 )
	{		
		dest[len++] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (tot_len);	
}

int main(void)
{	
	char hello[30] = "hello ";
	char *src = "world";
	unsigned int size = 30;
	unsigned int len = 0;
	len = ft_strlcat(hello,src,size);
	printf("word == %s  returned = %d \n",hello,len);
	len = ft_strlcat(hello,"people ",size);
	printf("word == %s  returned = %d \n",hello,len);
	len = ft_strlcat(hello," ",size);
	printf("word == %s  returned = %d \n",hello,len);
	len = ft_strlcat(hello,"",size);
	printf("word == %s  returned = %d \n",hello,len);
	return (0); 
}
