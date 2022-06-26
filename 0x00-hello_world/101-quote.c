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
	const char msg[] = { "and that piece of art is useful\"",
" - Dora Korpar, 2015-10-19" };

	syscall(SYS_write, 1, msg, sizeof(msg));

	return (1);
}
