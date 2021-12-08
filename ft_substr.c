/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:43:07 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 04:06:53 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_char(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	str_len;
	int		diff;

	size = 0;
	str_len = ft_strlen(s);
	if (start > str_len)
		return (1);
	diff = len - start;
	while (s[start] && size < len)
	{
		size++;
		start++;
	}
	return (size + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	str = malloc(sizeof(char) * count_char(s, start, len));
	if (str == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// int main()
// {
// 	char a[]= "anass";
// 	unsigned int begin  = 0;
// 	printf("%s\n", ft_substr(a, begin, 0));
// 	//printf("%d", substr(a, begin, 3) );
// }
