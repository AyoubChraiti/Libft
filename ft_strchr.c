/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:32:57 by achraiti          #+#    #+#             */
/*   Updated: 2023/11/06 11:14:02 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*b;
	char	p;

	i = 0;
	j = ft_strlen(s);
	b = (char *)s;
	p = (char)c;
	if (p == '\0')
		return (&b[j]);
	while (s[i] != '\0')
	{
		if (b[i] == p)
		{
			return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
