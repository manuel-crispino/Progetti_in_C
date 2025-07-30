#include <stdio.h>


int my_strncmp(char *s1,char *s2,unsigned int n)
{
	unsigned int i;
	
	i = 0; 
	while(i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	};
	return (0);
};

int main (void)
{	
	
	unsigned int n;
	n = 6;
	char *s1="hello";
	char *s2 = "hello";
	int result;
result = my_strncmp(s1, s2, n);
printf(" return = %d\n",result);
s2 = "halo";
result = my_strncmp(s1, s2, n);
printf(" return = %d\n",result);
s2 = "hllhlhla";
result = my_strncmp(s1, s2, n);
printf(" return = %d\n",result);
	return (0);
}
