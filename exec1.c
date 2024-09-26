#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	char* cmnd="ls";
	char* argument[]={"ls","-1",NULL};
	printf("Before execvp()\n");
	pid_t p=fork();
	if(p==0)
	{
		printf("Child process\n");
		int status= execvp(cmnd,argument);
		if(status=-1)
	{
		printf("Terminated\n");
  exit(1);
	}
	else
	{
		printf("Parents process\n");
		wait(NULL);  	
		printf("Done\n");
	}
}

