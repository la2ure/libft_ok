/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmestre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:14:52 by lmestre           #+#    #+#             */
/*   Updated: 2024/12/07 20:04:55 by lmestre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_word(const char *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	*word_cpy(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(s, c);
	word = malloc(len +1);
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**final_s;

	if (!s)
		return (NULL);
	int (i) = 0;
	int (len) = count_word(s, c);
	final_s = malloc((len + 1) * sizeof(char *));
	if (!final_s)
		return (NULL);
	while (i < len)
	{
		if (*s != c)
		{
			final_s[i] = word_cpy(s, c);
			if (final_s[i] == NULL)
				return (NULL);
			i++;
			s += word_len(s, c);
		}
		else
			s++;
	}
	final_s[len] = NULL;
	return (final_s);
}
/*
int main()
{
    char const *s = "....hello..night..";
    char c = '.';
    char **result = ft_split(s, c);

    if (result != NULL)
    {
        // Parcours du tableau de mots et affichage de chaque mot
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("Word %d: %s\n", i, result[i]);
            free(result[i]);  // Libérer chaque mot après utilisation
        }
        free(result);  // Libérer le tableau de mots
    }
    return 0;
}
*/
