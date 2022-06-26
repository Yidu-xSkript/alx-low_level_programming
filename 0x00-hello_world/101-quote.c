#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'UNIX is basically a simple OS?'
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" ";
	char msg_[] = "- Dora Korpar, 2015-10-19";

	strcat(msg, msg_);

	syscall(SYS_write, 1, msg, sizeof(msg));

	return (1);
}
