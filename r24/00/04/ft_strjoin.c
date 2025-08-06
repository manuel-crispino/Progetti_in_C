#include <stdio.h>
#include <stdlib.h>

int str_len(char *s)
{
	int len;
	
	len = 0;
	while(s && s[len])
		len++;
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;
	int i;
	int j;
	int max_len;	
	int k;
	
	j = 0;	
	i = 0;
	k = 0;
	dest = (char *)malloc(sizeof(char) * size);
	max_len = (size -1) * str_len(sep);
	if (size <= 0)
	{
		free(dest);	
		return (dest);
	}
	while (i < max_len)
	{ 
		j = 0;
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		if ( i < size - 1)		
		{ 	
			j = 0;
			while ( sep[j] != '\0')
				dest[k++] = sep[j++]; 
		}			
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

int main(void)
{	
	char *src[] = {"ab","cd","ef"};
	char **ptr = src;
	char *sep = ", ";
char *str = ft_strjoin(10, ptr, sep);
	printf(" str = %s\n",str);
	return (0);	
}
