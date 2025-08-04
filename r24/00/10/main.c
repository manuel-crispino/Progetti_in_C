#include <stdio.h>
void ft_swap(int *a , int *b)
{
 int c ; 
	c = *b ; 
	*b = *a ;
	*a = c ; 
}

int main(void)
{
int n = 10;
int nd = 42;
int *a= &n;
int *b= &nd;
printf("before the swap :\na = %d ;\nb = %d;\n", *a, *b);
printf("a = %p ;\nb = %p;\n",(void *) a,(void *) b);
ft_swap(a,b);
printf("after the swap :\na = %d ;\nb = %d;\n", *a, *b);
printf("a = %p ;\nb = %p;\n",(void *) a,(void *) b);
return 0 ;
}
