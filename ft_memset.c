/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:20:29 by achraiti          #+#    #+#             */
/*   Updated: 2023/11/11 20:03:37 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (n > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
