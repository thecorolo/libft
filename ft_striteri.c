/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinbi- <azinbi-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:11:29 by azinbi-           #+#    #+#             */
/*   Updated: 2021/12/08 04:02:52 by azinbi-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	function(unsigned int i, char *b)
// {
// 		b[i] = b[i] + 1;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int main()
// {
// 	char *sss;

// 	sss = NULL;
// 	ft_striteri(sss, function);
// 	printf("%s", sss);
// }
