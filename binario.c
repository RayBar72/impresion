#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - Function that change the order of a string.
 * @s: string to be write inverse.
 *
 */

char *rev_string(char *s)
{
	int i, d, count = 0;
	char temporal;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0, d = count - 1; i <
		     (count / 2); i++, d--)
	{
		temporal = s[i];
		s[i] = s[d];
		s[d] = temporal;
	}

    return(s);
}

int main(void)
{

int j = 0, i = 0, num = 0, n, no = 0;
char *s, *sfin;

n = no;
while (n > 1)
{
    n /= 2;
    j++;
}
j = j + 1;
sfin = malloc(j + 1);
s = sfin = malloc(j + 1);

n = no;
if (no == 0)
{
    s[0] = '0';
    s[1] = '\0';
}

while (n > 0)
{
    if (n % 2 == 0)
    {
        s[i] = 0 + '0';
    }

    if (n % 2 == 1)
    {
        s[i] = 1 + '0';
    }
    n /= 2;
    if (n == 0)
    {
        i++;
        s[i] = 1 + '0';
        break;
    }
    i++;
}
if(no !=0)
    s[i] = '\0';

sfin = rev_string(s);
printf("%s\n", sfin);
free(sfin);
return (i);
}
