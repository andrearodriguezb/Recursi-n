#include <stdio.h>
#include <math.h>

	
int fibonacci (int n)
{
	if (n==0)
	return 0;
	
	if (n==1)
	return 1;
	
	return (fibonacci (n-1) + fibonacci (n-2));
}



int main ()
{
	int n;
	int i;
	printf ("Numero de elementos de la serie Fibonacci: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	printf ("%d ", fibonacci(i));
	printf("\n");
	return 0;
}


