// program to calculate the nth fibonacci number in fibonacci series.
#include<stdio.h>
int main(int argc, char const *argv[])
{
     int start = 0;
     int next = 1;
     int upnext=start + next;
     printf("%d %d %d",start,next,upnext);
     for(int i = 3;i<10;i++){
         start = next;
         next = upnext;
         upnext = start+next;
         printf(" %d",upnext);
     }
    return 0; 
}   
