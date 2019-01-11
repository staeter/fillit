/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staeter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:47:54 by staeter           #+#    #+#             */
/*   Updated: 2018/12/05 14:47:55 by staeter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static boolean	backtrack_sub(grid *g, node *n)
{
	if (n == NULL)
		return (1);
	movetopleft_tetri(n->te, g->gsize);
	while (incrtetri_grid(g, n->te))
		if (backtrack_sub(g, n->next))
			return (1);
	return (0);
}

void			backtrack(grid *g)
{
	while (g->gsize <= 16 && !backtrack_sub(g, g->incr))
	{
		g->maxgap += ft_pow(g->gsize + 1, 2) - ft_pow(g->gsize, 2);
		g->gsize++;
	}
}
