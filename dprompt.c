#include "shell.h"

/**
 * d_prompt - desplays a prompt $
 */

void d_prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
