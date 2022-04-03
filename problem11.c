// write a program to find highesst an lowest element in the array.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={2,3,2,4,55,43,-776,32,6,1};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (arr[i]<min)
        {
            min=arr[i];    
        }
        if (arr[i]>max)
        {
            max=arr[i];    
        }
    }
    printf("max value is %d and min value is %d",max,min);
    getchar();
    return 0;
}
    