#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	printf("*dest = %p\n",dest);
	int ascii;
	char *cpy = dest; //copy the pointer 
	while (*src)
	{
		printf("*dest = %c == *src = %c\n",*dest,*src);
		*dest = *src;
		dest++;
		src++;
	}
	printf("before dest = %c\n",*dest);
	*dest = '\0';// add end of word == null 
	ascii = *dest;
	printf("now dest = %d\n",ascii);
	return (cpy);
};

int main (void)
{
	char a[] = "hello";
	char b[100];
	char *result = ft_strcpy(b,a);  
	printf("result = %s",result);
	return (0);
}
