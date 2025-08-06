#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i; 
	int *cpy;
	
	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	cpy = (int *)malloc(sizeof(int) * size);
	if (!cpy)
		return (-1); 
	while (i < size)
		cpy[i++] = min++;
	*range = cpy;
	return (size);
}

int main()
{
	int *tab;
	int size = ft_ultimate_range(&tab, 0, 1);
	int i = 0;
	printf("tot = %d\n", size);
	while(i < size)
		printf("%d\n", tab[i++]);
	free(tab);
	return (0);		
}
