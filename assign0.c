#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h>

int main() 
{ 
        fork();
 
        fork();
 
        fork();
 
	sleep(10);
        return 0;
} 
