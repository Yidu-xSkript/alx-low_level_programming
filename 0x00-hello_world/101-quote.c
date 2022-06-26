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
	char msg[59] = "and that piece of art is useful\" ";
	char msg_[] = "- Dora Korpar, 2015-10-19\n";
	int length, j;

	length = 0;
	while (msg[length] != '\0')
	{
		++length;
	}

	for (j = 0; msg_[j] != '\0'; ++j, ++length)
	{
		msg[length] = msg_[j];
	}

	msg[length] = '\0';

	syscall(SYS_write, 1, msg, sizeof(msg));

	return (1);
}
