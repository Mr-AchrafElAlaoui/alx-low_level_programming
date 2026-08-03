#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: String to change 
 * @to: String to set
 */
void set_string(char **s, char *to)
{
	*s = to;	
}
