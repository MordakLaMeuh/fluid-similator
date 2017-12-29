/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_one_of.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcombey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 22:00:16 by vcombey           #+#    #+#             */
/*   Updated: 2017/02/05 22:00:52 by vcombey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_one_of(char c, char *that)
{
	int	i;

	i = 0;
	while (that[i])
	{
		if (c == that[i])
			return (1);
		i++;
	}
	return (0);
}
