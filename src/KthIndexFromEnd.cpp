/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
int xstrlen(char *p);
char KthIndexFromEnd(char *str, int K) {
		int len;
		len = xstrlen(str);
		if ((K<0) || (K>len) || (str == '\0')||(str[K]=='\0'))
		return '\0';
		else
			return str[len - K - 1];
	}
int xstrlen(char *p)
{
	int l = 0;
	if (p != NULL)
	{
		while (*p != '\0')
		{
			l++;
			p++;
		}
		return(l);
	}
	else
		return NULL;
}