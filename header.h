#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>


/**
 * struct my_string - string datatype
 * @str: array of string
 * @num_memb: number of members
 *
 */
typedef struct my_string
{
	char **str;
	unsigned int num_memb;
} string_t;


extern char **environ;

char *_getenv(const char *name);
char *read_input(void);
string_t *split_string(char str[], char *);
void execute_fwe(char *argv[], char *fn);
int create_shell(char *fn);
void free_grid(char **grid, int height);

#endif /*HEADER_H*/
