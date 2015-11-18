/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<string.h>
char KthIndexFromEnd(char *str, int K) {
	//return '\0';
	int i, len;
	len = strlen(str);
	strrev(str);
	if ((K<0) || (K>len) || (str == NULL))
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == K)
			return str[i];

	}
	//return 0;

	//return '\0';
}
