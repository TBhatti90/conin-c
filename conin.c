#include <conin.h>

int conin(char str[], int len)
{
	int c;

	if (fgets(str, len, stdin) == NULL)
		return -1;
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	else
		while ((c = getchar()) != EOF && c != '\n')
			;

	return strlen(str);
}
