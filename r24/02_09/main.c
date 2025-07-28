#include <stdio.h>
#include <unistd.h>

static void is_small_letter(char *str,int i, int is_first_letter)
{
	if ((str[i] >= 'a' && str[i] <= 'z') && (is_first_letter)) 
	{		
		str[i] = str[i] - 32;
	}
	else if((!is_first_letter) && (str[i] >= 'A' && str[i] <= 'Z'))  
	{
		str[i] = str[i] + 32;
	}
}

static int is_letter(char *str,int i)
{
	if ((str[i] >= 'a' && str[i] <= 'z') 
		|| (str[i] >= 'A' && str[i] <= 'Z'))
	{
		return (1); 	
	}
	return (0); 
}

static char *capitalize(char *str)
{
	int i; 
	int is_first_letter;
	 
	is_first_letter = 1;	
	i = 0; 
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '-')
		{
			is_first_letter = 1;
		}
		else if (is_letter(str,i))
		{
			is_small_letter(str,i,is_first_letter);
			is_first_letter = 0;
		}
		i++;	
	}	
	return (str);
}

int main (void)
{
	char str[]="hello world-hi -my-name is Manuel mANuel i SaID";
	char *ptr = str;
	capitalize(ptr);
	printf("New string = %s",ptr);
	return (0);
}
