#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {

	int ret = fork();

	if (ret == 0)
		execl("/bin/grep","grep","main", "test.txt", NULL);
	else
		wait(NULL);
		printf("Parent process completed\n");

	return 0;
}
