// check if the number is prime or not using loop.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    int isPrime=1;
    scanf("%d",&n);
    for(int i=n-1;i>1;i--){
        if ((n%i)==0)
        {
            isPrime=0;
            printf("Not Prime");
            break;
        }
    }
    if (isPrime==1)
    {
        printf("Prime");
    }
    
    return 0;
}
