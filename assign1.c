#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main()
{
    int ret = fork();
    if (ret == 0)
	execl("/bin/ls","ls",NULL);
    else {
	wait(NULL);
	printf("Parent process done.\n");
    }
    return 0;
}
