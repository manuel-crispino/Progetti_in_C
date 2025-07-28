#include <stdio.h>
#include <unistd.h>


void print_char(void *addr, unsigned int size)
{	unsigned int i = 0;
	char *str = (char *)addr; 
	
	while(i < size )
	{
		write(1,&str[i], 1);
		i++;
	}	
	
}


void *print_memory(void *addr, unsigned int size)
{
	unsigned int i = 0; 
	char *ptr = (void *)addr;
	while (i < size)
	{
		write(1, ptr[i] , 1);
		i++;
	}
		write(1, " : " , 3);
	print_char(addr,size);
	return (ptr);
}

int main ()
{
	char str[]="hello world how is it going my name is manuel nice to meet you all "; 
	void *ptr= str;
	unsigned int len = 0 ; 
	 
	while( str[len] != '\0')
	{
		len++;
	}
	printf("len is == %d ptr = %s", len, (char *)ptr);
	print_memory(ptr,len);
	return(0);
}
