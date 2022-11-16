#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * main - read input from user
 * @ac: number of arguments
 * @av: list of arguements strings
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	while (1)
	{
		if (create_shell(av[0]) > 0)
			return (1);
	}
	return (0);
}
