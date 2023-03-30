#include "main.h"

/**
 * cap_string - Captilization the string it is received
 * @str: String to captilaize
 * Return: capatilized string
 */

char cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	{
			index++;
	}
	if (str[index - 1] == ' ' ||
	str[index - 1] == ',' ||
	str[index - 1] == '.' ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == '(' ||
	str[index - 1] == ')' ||
	str[index - 1] == '{' ||
	str[index - 1] == '}' ||
	str[index - 1] == ';' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' || index == 0)
	index++;
	}
	return (str);
}
