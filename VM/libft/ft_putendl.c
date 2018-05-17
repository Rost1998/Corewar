/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:28:04 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:03:39 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *s)
{
	char	i;

	if (s)
	{
		i = '\n';
		while (*s != '\0')
			write(1, s++, 1);
		write(1, &i, 1);
	}
}