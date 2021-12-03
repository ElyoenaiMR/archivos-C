#include <stdio.h>

int fibonacci(int n);

int main()
{
 int numero, i;
 printf("Digite un número: ");
 scanf("%i",&numero);

 for(i=numero;i>=1;i--)
 {
     printf("%i , ", Num(i));
 }

 return 0;
}

int Num(int n)
{
    if(n==1)
    {
      return n;
    }
    else
    {
        return (n-1);
    }
}
