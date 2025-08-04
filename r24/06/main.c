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

	j = argc -1;
	i = 1;
	tmp = argv[1];
	while (i <= j)	
	{
		if (ft_strcmp(argv[i],argv[j]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[j];
			argv[j] = tmp;
		}
		j--;
	}
	while(i <= argc - 1)
	{
		print(argv[i]);
		write(1, "\n", 1);
		i++;	
	}
}

int main(int argc, char **argv)
{
		sort(argc,argv);
	return (0);
}
