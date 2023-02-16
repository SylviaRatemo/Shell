#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	my_ppid = getppid();

	printf("pid = %u\nppid = %u\n", my_pid, my_ppid);

	return (0);
}
