#include<stdio.h>
#include <unistd.h>
#include<string.h> 


void main()
{

 int p=fork();
 int c=fork();


//Child tree
// parent
// |_____________    
// |             |________
// |             |        |
// |______       |       p=0
// |      |      |       c=0
// |      |      |
// |      |      p=0
// |     p>0     c>0
// p>0   c=0   
// c>0   

int a=5, b=-9;

 if(p>0 && c>0) //PARENT process IS BEING EXECUTED.
 {
 printf(" THE ADDITION IS : %d\n",a+b);
 }
 else if(p>=0 && c==0) //FIRST CHILD IS BEING EXECUTED.
 {
 printf(" THE SUBSTRACTION IS : %d\n",a-b);
 }
 else if(p==0 && c>0) //SECOND CHILD IS BEIGN EXECUTED.
 {
 printf(" THE MULTIPLICATION IS : %d\n",a*b);
 }
 else if(p==0 && c==0) //THIRD CHILD IS BEING EXECUTED.
 {
 printf(" THE DIVISION IS : %d\n",a/b);
 } 
}
