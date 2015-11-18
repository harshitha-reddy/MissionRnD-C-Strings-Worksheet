/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<stdbool.h>
int intToStr(int x, char *str, int d);
void reverse(char *str, int len);
int power(int base, int pow);

void number_to_str(float number, char *str,int afterdecimal){
		int ipart = (int)number;
		float fpart = number - (float)ipart;
		if (number<0)
		{
			//ipart=ipart;
			fpart = -fpart;
		}
		bool isNegative = false;
		int i = intToStr(ipart, str, 0);
		if (afterdecimal != 0)
		{
			str[i] = '.';
			fpart = fpart * power(10, afterdecimal);

			intToStr((int)fpart, str + i + 1, afterdecimal);
		}

	}
int intToStr(int x, char *str, int d)
{
	bool isNegative = false;
	int i = 0;
	if (x < 0)
	{
		isNegative = true;
		x = -x;
	}
	while (x != 0)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}


	if (isNegative)
		str[i++] = '-';
	while (i < d)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}
void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}
int power(int base, int pow)
{
	if (pow == 0)
		return 1;
	else
		return base*(power(base, pow - 1));
}



	

