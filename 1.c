#include <stdio.h>
#include <string.h>
#include <sys/types.h>
void main()
{
 int a=0;
 int b=fork();
 if(b==0)
 printf("\nMy pid = %d and my parent pid= %d and value of a=\n",getpid(),getppid(),++a);
 //The above line will never print the value of a because in child process a is missing
 //fork only create child for succeding lines
 printf("\nMy pid=%d and a=%d\n",getpid(),++a);
}
