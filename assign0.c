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
	system("ps -f --forest -C a.out");       
        return 0; 
} 
