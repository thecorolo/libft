/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:12:01 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 03:36:32 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t len )
{
	size_t	i;

	i = 0;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (len > 0)
		{
			((char *)d)[len - 1] = ((char *)s)[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}

// int main()
// {

// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};

// 	// char ptr[] = "ABCDE";
// 	// ft_memmove(ptr, ptr + 2, 3);
// 	ft_memmove(sResult + 1, sResult, 2);
// 	printf("%s", sResult);
// }
