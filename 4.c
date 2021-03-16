#include <stdio.h>
#include <string.h>
#include <sys/types.h>
void main()
{
 pid_t c =fork();
 
if(c==0)
{
 printf("\nMy pid = %d and my parent pid= %d\n",getpid(),getppid());
}
 else{
     sleep(15);//here parent will sleep for 15 sec while paent will get executed
     printf("\nMy pid=%d\n",getpid());
 }
}
