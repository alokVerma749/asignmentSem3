// program to input an array of five elements and print that array.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf(" %d ",arr[i]);
    }
    getchar();
    return 0;
}
