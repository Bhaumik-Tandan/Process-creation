#include<stdio.h>
#include <unistd.h>
#include<string.h> 


void main()
{

 int p=fork();
 if(p==0)
 {
     sleep(3);
     printf("My pid is %d and parent pid is %d",getpid(),getppid());
     //here ppid will be different because prant will get terminated and child is "orphan"
 }
 else
 printf("I am parent My pid is %d",getpid());
 //above statement will print true parent pid 
}
