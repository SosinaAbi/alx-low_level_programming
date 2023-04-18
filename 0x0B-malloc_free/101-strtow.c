#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word_size(char *str);
int word_count(char *str);
char **strtow(char *str);

/**
 * word_size - Counts each word length.
 * @str: String parameter.
 *
 * Return: Returns each word length.
 */

int word_size(char *str)
{
	int i = 0, size = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		i++;
		size++;
	}

	return (size);
}

/**
 * word_count - Counts number of
 * words.
 * @str: String parameter.
 * Return: Returns number of words.
 */
int word_count(char *str)
{
	int i = 0, count = 0, size = 0;

	for (i = 0; *(str + i); i++)
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		if (*(str + i) != ' ')
		{
			count++;
			i += word_size(str + i);
		}
	}
	return (count);
}

/**
 * strtow - Converts string into words.
 * @str: String parameter.
 *
 * Return: Returns array of words.
 */

char **strtow(char *str)
{
	char **words;
	int i = 0, count_w, w, count_l, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count_w = word_count(str);
	if (count_w == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (count_w + 1));
	if (words == NULL)
		return (NULL);
	for (w = 0; w < count_w; w++)
	{
		while (str[i] == ' ')
			i++;
		count_l = word_size(str + i);
		words[w] = malloc(sizeof(char) * (count_l + 1));
		if (words[w] == NULL)
		{
			for (; w >= 0; w--)
				free(words[w]);
			free(words);
			return (NULL);
		}
		for (l = 0; l < count_l; l++)
		{
			words[w][l] = str[i++];
		}
		words[w][l] = '\0';
	}
	words[w] = NULL;
	return (words);
}
