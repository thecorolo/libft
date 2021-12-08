/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:13:38 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/01 03:32:19 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_concatinate(char *dest, const char *src,
							size_t len_d, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && (len_d + 1) < size)
	{
		dest[len_d] = src[i];
		i++;
		len_d++;
	}
	dest[len_d] = '\0';
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	res;

	if (dest)
		len_d = ft_strlen(dest);
	else
		len_d = 0;
	len_s = ft_strlen(src);
	if (!dest && size == 0)
		return (len_s);
	if (len_d < size)
		res = len_d + len_s;
	else
		res = len_s + size;
	if ((len_d) < size)
		ft_concatinate(dest, src, len_d, size);
	return (res);
}
