/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void swap(char * , int , int );
void swapagain(char *);

void str_words_in_rev(char *input, int len){
	int start = 0, end = len - 1;
	
	//int start = 0, end = len - 1;
	//char temp;
	int tempstart = 0;
	len = strlen(input);
	swap(input, 0, end);
	swapagain(input);
	printf("\nString after swapping:\n %s", input);

}
void swap(char *str, int start, int end)
{
	char temp;
	while (start<end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
void swapagain(char *str)
{
	int start = 0;
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == ' ')
		{
			swap(str, start, index - 1);
			start = index + 1;

		}
		index++;
	}
	swap(str, start, index - 1);


}

