#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0,res=0,i;
    printf("Fibonacci\n");
    printf("Introduce el numero de numeros: ");
	scanf("%i",&num);
    printf("t");
    for( i=0;i<=num-1;i++)
    {
        res = fibonacci(i);
        printf("%i  ", res);
    }
    printf("n");
    return 0;
}
int fibonacci(int n)
{
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
