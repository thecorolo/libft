/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:15:04 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 04:09:17 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char c)
{
	int	i;
	int	wd;

	i = 0;
	wd = 0;
	while (s[i] == c && s[i])
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			wd++;
		i++;
	}
	return (wd + 1);
}

int	countofchar(char const *s, char c)
{
	int	i;
	int	cc;

	i = 0;
	cc = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		cc++;
		i++;
	}
	return (cc);
}

char	**ft_split(char const	*s, char c)
{
	int			i;
	int			j;
	int			cc;
	char		**str;

	str = malloc(sizeof (char *) * (countwords(s, c) + 1));
	if (str == NULL)
		return (NULL);
	cc = countofchar(s, c);
	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (i < countwords(s, c))
	{
		cc = countofchar(s + j, c);
		while (s[j] == c)
			j++;
		str[i] = ft_substr(s, j, cc);
		i++;
		j += cc;
	}
	str[i] = NULL;
	return (str);
}

// int main()
// {
// 	char b[] = "        ";
// 	char **res;
// 	char z = ' ';
// 	res = ft_split("        ", ' ');

// 	int i;
// 	i = 0;
// 	printf("%d\n",countwords(b, z));
// 	// while(i < countwords(b, z))
// 	// {
// 	//   printf("this --- %s\n",res[i]);
// 	//   i++;
// 	// }
// 	// system("leaks a.out");
// }
