#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: char array/str
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	int sl = 0;

	char str;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = sl - 1; i >= sl / 2; i--)
	{
		str = s[i];
		/* saves the char before changing it */
		s[i] = s[sl - i - 1];
		/* changed char to = the char that is equally far away from the middle character */
		s[sl - i - 1] = str;
		/* changes the char we just copied to the char we saved */
/**
 * first loop, swaps the outer characters
 * swaps next characters inward every loop
 * stops at half way (i >= sl / 2) so doesnt undo swapping
 * - 1 for i = sl - 1 so doesnt include /0
 * think of the middle like the center of a circle, and the distance between the center and the value that i is, is the radius
 * actually, better described as though the middle is 0 and to think of it as absolute values
 * sl - i - 1 is confusing but because i is sl - 1 (+ -1 for every loop), basically, i is the end of the word, getting closer to the middle
 * and so sl (the total # of letters) - i (with - 1 to cancel out the - 1 in i = sl - 1 to avoid \0) gets you back to the beginning, getting closer to the middle
 *
 * would honestly be less confusing to type it as:
 * 	for (i = 0; i <= sl / 2; i++)
 * 	{
 * 		str = s[i];
 * 		s[i] = s[sl - i - 1];
 * 		s[sl - i - 1] = str;
 * 	}
 * but only because now the -1 is to avoid the \0 rather than to undo the -1 from i= that is to avoid \0
 * it makes more sense to subtract i from sl to get to the end up the function rather than subtract i from sl to get to the beginning of the function, it's just less tedious when thinking it through/explaining it
 */
	}
}
