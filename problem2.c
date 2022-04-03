// program to calculate the nth fibonacci number in fibonacci series using recursion.
#include<stdio.h>
#include<conio.h>

int fib(int n){
    if (n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    getchar();
    return 0;
}


