/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<Stdio.h>
char removeSpaces(char *str) {
	
	int i, j;
	if ((str == NULL) || (str == '\0'))
		return '\0';
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			for (j = i; str[j]; j++)
				str[j] = str[j + 1];
			i--;
		}
	}
	return *str;
}

	
