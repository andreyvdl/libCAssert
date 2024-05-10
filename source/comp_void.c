/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp_void.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:49:19 by adantas-          #+#    #+#             */
/*   Updated: 2024/05/09 23:49:34 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

int	le_void(void *a, void *b)
{
	return (a <= b);
}

int	lt_void(void *a, void *b)
{
	return (a < b);
}

int	eq_void(void *a, void *b)
{
	return (a == b);
}

int	gt_void(void *a, void *b)
{
	return (a > b);
}

int	ge_void(void *a, void *b)
{
	return (a >= b);
}

int	df_void(void *a, void *b)
{
	return (a != b);
}
