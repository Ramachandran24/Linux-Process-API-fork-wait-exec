//C Program to create new process using Linux API system calls fork() and exit()


#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{ 
int pid; 
pid=fork(); 

if(pid == 0) 
{ 
printf("Iam child my pid is %d\n",getpid()); 
printf("My parent pid is:%d\n",getppid()); 
exit(0); 
} 
else{ 
printf("I am parent, my pid is %d\n",getpid()); 

sleep(100); 

exit(0);
} 
}


/*
Output:

I am parent, my pid is 8203


Iam child my pid is 8204
My parent pid is:8203

It will wait for 100s to terminate
*/