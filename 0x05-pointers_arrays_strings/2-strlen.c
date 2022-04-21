/**
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: the value of the length of i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])

		i++;
	return (i);
}
