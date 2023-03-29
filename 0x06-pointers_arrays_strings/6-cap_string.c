/**
 * cap_string - capitalizes all words of a string.
 * @s: a string
 *
 * Return: pointer to a string
 */

char *cap_string(char *s)
{
	char *begin;

	begin = s;

	while (*begin != '\0')
	{
		if (*(begin - 1) == ' ' && (int)*begin >= (int)'a' &&
		    (int)*begin <= (int)'z')
		{
			*begin = (char)((int)*begin - 32);
		}

		begin++;
	}

	return (s);

}
