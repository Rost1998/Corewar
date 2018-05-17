/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.o                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:20:11 by vhavryle          #+#    #+#             */
/*   Updated: 2018/03/30 13:19:37 by vhavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (s)
	{
		while (s[++i] != '\0')
			if (s[i] == c)
				return ((char *)&s[i]);
		if (c == '\0')
			return ((char *)&s[i]);
	}
	return (NULL);
}
