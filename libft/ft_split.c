/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:20:00 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:58:12 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Allocates (with malloc(3)) and returns an array of string obtained by
 * splitting 's' using the character 'c' as a delimiter. The array must end
 * with a NULL pointer.
 *
 * - Parameters:
 * s: The string to be splitted.
 * c: The delimiter character.
 *
 * Returns the array of new strings resulting from the split
 * or NULL if the allocation fails.
**/

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		if (*(s + i) != '\0')
		{
			count++;
			i++;
		}
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (*(s + i) && (*(s + i) != c))
	{
		count++;
		i++;
	}
	return (i);
}

static char	*ft_getword(char const *s, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(s, c, start);
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (*(s + i) == c)
		i++;
	while (*(s + i) != c && *(s + i) != '\0')
	{
		word[j] = *(s + i);
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*(s + i) != '\0')
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		if (*(s + i) != '\0')
		{
			arr[j++] = ft_getword(s, c, i++);
		}
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
/* BUGGED
static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		while ((*(s + i) == c) && (*(s + i) != '\0'))
			i++;
		if (*(s + i) != '\0')
		{
			count++;
			i++;
		}
		while ((*(s + i) != c) && (*(s + i) != '\0'))
			i++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c, int start)
{
	int	i;

	i = start;
	while ((*(s + i)) && (*(s + i) != c))
	{
		i++;
	}
	return (i);
}

static char	*ft_getword(const char *s, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(s, c, start);
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (*(s + i) == c)
		i++;
	while (*(s + i) != c && *(s + i) != '\0')
	{
		word[j] = *(s + i);
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c)) + 1);
	if (!res)
		return (NULL);
	while (*(s + i) != '\0')
	{
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		if (*(s + i) != '\0')
		{
			res[j++] = ft_getword(s, c, i++);
		}
		while (*(s + i) != c && *(s + i) != '\0')
			i++;
	}
	res[j] = NULL;
	return (res);
}

------------------

#include<stdio.h>
static int	ft_wordlen(const char *s, char c, int index_start)
{
	int	start;

	start = index_start;
	while ((*(s + start) != '\0') && (*(s + start) != c))
		start++;
	return (start);
}
static int	ft_wordcounter(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		while ((*(s + i) != '\0') && (*(s + i) == c))
			i++;
		if (*(s + i) != '\0')
		{
			count++;
			i++;
		}
		while ((*(s + i) != '\0') && (*(s + i) != c))
			i++;
	}
	return (count);
}
char	**ft_split(const char *s, char c)
{
	char **res;
	size_t	lenfind;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char) * (ft_wordcounter(s, c) + 1));
	if (!res)
		return (NULL);
	while (*(s + i) != '\0')
	{
		while ((*(s + i) != '\0') && (*(s + i) == c))
			i++;
		if (*(s + i) != '\0')
		{
			lenfind = (ft_wordlen(s, c, i));
			res[j] = ft_substr(s, i, lenfind - i);
			printf("Indice: %lu, lenfind: %lu\n", i, lenfind);
			j++;
			i++;
		}
		while ((*(s + i) != '\0') && (*(s + i) != c))
			i++;
	}
	res[j] = NULL;
	return (res);
}

#include"ft_substr.c"
#include <stdio.h>
int	main()
{
	int		index;
	char	c = 'x';
	char	*str = "xxcasaxvaca";;
	char	**split;
	split = ft_split(str, c);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
	printf("%s\n", str);
}
*/
