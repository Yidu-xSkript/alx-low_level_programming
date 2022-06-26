#include <unistd.h>
#include <sys/syscall.h>

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
	char msg_[] = "- Dora Korpar, 2015-10-19"

	syscall(SYS_write, 1, strcat(msg, msg_), sizeof(strcat(msg, msg_)));

	return (1);
}
