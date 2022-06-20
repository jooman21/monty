#include "monty.h"

char **op_toks = NULL;

/**
 * main - main function
 * @argc: Count of arguments passed to the program
 * @argv: Pointer to an array of char pointers to arguments
 *
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error
 */
int main(int argc, char **argv)
{
	FILE *script_fdr = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());
	script_fdr = fopen(argv[1], "r");
	if (script_fdr == NULL)
		return (f_open_error(argv[1]));
	exit_code = run_monty(script_fdr);
	fclose(script_fdr);
	return (exit_code);
}
