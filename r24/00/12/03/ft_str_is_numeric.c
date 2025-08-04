#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			return(0); 
		}
		i++;
	}
	return (1);
}

void check(int a,char *val)
{
  	if (a == 0){
	printf("return 0 ");
	} 	
	else{
	printf("return 1 ");
	}
	printf(" val = %s; \n",val);
}

int main (void)
{
	int a; 
	char start[100]="hello";
	char *val = start;
	a = ft_str_is_numeric(val);
	check(a,val);
	val="234hello";
	a = ft_str_is_numeric(val);
	check(a,val);
	val="123";
	a=ft_str_is_numeric(val);
	check(a,val);
}

