// program to determine wheather a number is palindrome or not.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int n1 = n;
    
    int new = 0;
    int multiple = 1;
    while (n!=1)
    {
    new = (new*multiple) + (n%10);
    n/10;
    multiple = multiple*10;
    }

    if(new == n1){
        printf("Palindrome");
    }
    return 0;
}
