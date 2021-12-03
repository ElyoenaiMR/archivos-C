#include <stdio.h>

int fibonacci(int n);

int main()
{
 int numero, i;
 printf("Digite el número de elementos: ");
 scanf("%i",&numero);

 for(i=0;i<=numero;i++)
 {
     printf("%i , ", fibonacci(i));
 }

 return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n==1)
    {
      return n;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
