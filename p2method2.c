// find nth fibonacci number using direct formula with constant ime complexity.
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    scanf("%d",&n);
    double phi = (1+sqrt(5))/2;
    int ans = round(pow(phi,n)/sqrt(5));
    printf("the answer is %d",ans);
    getchar();
    return 0;
}
