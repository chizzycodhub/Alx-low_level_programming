#include "main.h"

int word_len(char *str);
int count_words(char *str);

/**
 * word_len - Locates the index marking the end of the first
 *            word contained within a string.
 * @str: The string to search.
 *
 * Return: The index marking the end of the initial word pointed to
 *         by str.
 */
int word_len(char *str)
{
	int index, wordlen = 0;

	for (index = 0; str[index] != '\0' && str[index] != ' '; index++)
		wordlen++;

	return (wordlen);
}

/**
 * count_words - Count the number of words contained within a string
 *
 * @str: The string to be searched.
 *
 * Return: The number of words contained within a string.
 */
int count_words(char *str)
{
	int index, wordsnum = 0, strlen = 0;

	for (index = 0; str[index] != '\0'; index++)
		strlen++;

	for (index = 0; index < strlen; index++)
	{
		if (str[index] != ' ')
		{
			wordsnum++;
			index = index + word_len(str + index);
		}
	}
	return (wordsnum);
}

/**
 * strtow - Split a string into words
 *
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings (words)
 *         Otherwise, str = NULL, str = "" or the function fails - NULL
 */
char **strtow(char *str)
{
	char **strings;
	int words, letters, word, letter, index;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (word = 0; word < words; word++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[word] = malloc(sizeof(char) * (letters + 1));
		if (strings[word] == NULL)
		{
			for (; word > 0; word--)
				free(strings[word]);

			free(strings);
			return (NULL);
		}

		for (letter = 0; letter < letters; letter++)
			strings[word][letter] = str[index++];

		strings[word][letter] = '\0';
	}
	strings[word] = NULL;

	return (strings);
}
