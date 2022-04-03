// program to search element using linear search.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10]={22,3,5,43,6,2,1,78,44,21};
    int target = 21;
    int ans = -1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==target)
        {
           ans = i; 
           break;
        }
    }
    printf("%d is present at index %d",target,ans);
    getchar();
    return 0;
}
