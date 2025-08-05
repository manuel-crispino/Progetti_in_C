#include <unistd.h>

void print(char *str)
{
	int i;
	
	i = 0;
	while ( str[i] != '\0') 
		{
			write(1, &str[i], 1);
			i++;
		}
}

int ft_strcmp(char *s1, char *s2)
{
	int i; 
	
	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;	
	return ((unsigned char )s1[i] - (unsigned char )s2[i]);
}

void sort(int argc, char **argv)
{
	int 	i;
	int 	j;
	char 	*tmp;	

	j = 0;
	i = 1;
	while( i < argc)
	{
		j = i + 1;
		while (j <= argc)	
		{
			if (ft_strcmp(argv[i],argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while(i <= argc)
	{
		print(argv[i]);
		write(1, "\n", 1);
		i++;	
	}
}

int main(int argc, char **argv)
{
	int i;
	
	i = argc - 1;
		sort(i,argv);
	return (0);
}
