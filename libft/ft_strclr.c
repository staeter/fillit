/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraziano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:34:43 by nraziano          #+#    #+#             */
/*   Updated: 2018/10/18 11:53:45 by nraziano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	else
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
