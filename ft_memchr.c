/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:23:53 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 04:08:41 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&((void *)str)[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char sr[] = "aass";
// 	char find = 'n';
// 	printf("%s", ft_memchr(sr, find,2 ));
// }
