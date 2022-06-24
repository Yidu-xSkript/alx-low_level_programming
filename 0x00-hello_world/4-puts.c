#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 */
int main(void)
{
	puts();
	return (0);
}


int puts(void)
{
	const char msg[] = "Programming is like building a multilingual puzzle";
	syscall(SYS_write, 1, msg, sizeof(msg));
	return (0);
}
