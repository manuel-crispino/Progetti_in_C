




#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	dest = src;
	return (dest);
};

int main (void)
{
	char a[] = "hello";
	char *b = ft_strcpy(b,a);
	printf("b = %s",b);
	return (0);
}
