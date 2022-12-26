#include "conin.h"

int conin(char *str, int max)
{
	int c;
	int len;

	if (fgets(str, max, stdin) == NULL)
		return -1;

	len = strlen(str);

	if (str[len - 1] == '\n')
		str[len - 1] = '\0';
	else
		while ((c = getchar()) != EOF && c != '\n')
			;

	return len;
}
