#include <stdio.h>
#include<unistd.h>
{
   int maim fork();
    
    printf("process ID: %d\n", getpid());
    printf("parent process ID: %d\n", getppid());
    return 0;
}
