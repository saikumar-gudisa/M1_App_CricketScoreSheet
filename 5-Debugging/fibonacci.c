# include<stdio.h>

int fib(int n);

int main(void)
{
	int i;
	int n;
	
	printf("Input the index of the fibinocci sequence\n");
	scanf("%d", &n);
	
	printf("\nThe first %d fibonacci series numbers\n", n);
	
	for(i=0; i<=n; i++)
	{
		printf("%d ", fib(i));
	}
	printf("\n\n");
	system("pause");
}

int fib(int n)
{
	if(n== 0)
	  return 0;
	  
	if(n==1)
	  return 1;
	  
	  return fib(n-1) + fib(n-2);
}
