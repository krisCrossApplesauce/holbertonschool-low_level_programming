#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _atoi - converts numbers from a string to an int
 *
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int num, i, p, m, n, z, x, sl;

	num = 0;

	p = 0;

	m = 0;

	n = 0;

	z = 0;

	x = 0;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl; i++)
	{
		if (x == 0)
		{
			if (!(s[i] >= 48) && !(s[i] <= 57)  && n > 0)
			{
				x = 1;
			}
			else if (!(s[i] >= 48) && !(s[i] <= 57) && z == 1)
			{
				x = 1;
			}
			else if (s[i] == 43)
			{
				p++;
			}
			else if (s[i] == 45)
			{
				m++;
			}
			else if (s[i] >= 49 && s[i] <= 57 && n == 0)
			{
				if (s[i] == 49)
				{
					num = 1;
				}
				else if (s[i] == 50)
				{
					num = 2;
				}
				else if (s[i] == 51)
				{
					num = 3;
				}
				else if (s[i] == 52)
				{
					num = 4;
				}
				else if (s[i] == 53)
				{
					num = 5;
				}
				else if (s[i] == 54)
				{
					num = 6;
				}
				else if (s[i] == 55)
				{
					num = 7;
				}
				else if (s[i] == 56)
				{
					num = 8 ;
				}
				else if (s[i] == 57)
				{
					num = 9 ;
				}

				if (m > p)
				{
					num = num * -1;
				}

				n++;
			}
			else if (s[i] == 48 && n == 0)
			{
				z = 1;
			}
			else if (s[i] >= 48 && s[i] <= 57)
			{
				num = num * 10;

				if (s[i] == 48)
				{
					num = num + 0;
				}
				else if (s[i] == 49)
				{
					num = num + 1;
				}
				else if (s[i] == 50)
				{
					num = num + 2;
				}
				else if (s[i] == 51)
				{
					num = num + 3;
				}
				else if (s[i] == 52)
				{
					num = num + 4;
				}
				else if (s[i] == 53)
				{
					num = num + 5;
				}
				else if (s[i] == 54)
				{
					num = num + 6;
				}
				else if (s[i] == 55)
				{
					num = num + 7;
				}
				else if (s[i] == 56)
				{
					num = num + 8;
				}
				else if (s[i] == 57)
				{
					num = num + 9;
				}

				n++;
			}
		}
	}

	return (num);
}
