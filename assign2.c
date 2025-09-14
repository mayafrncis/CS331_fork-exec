#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	int ret1 = fork();
	if (ret1 == 0)
		execl("/bin/ls", "ls", NULL);
	int ret2 = fork();
	if (ret2 == 0) {
		sleep(1);
		execl("/bin/date", "date", NULL);
	}
	else {
		while(wait(NULL) > 0);
		printf("Parent process done.\n");
	}
	return 0;
}
