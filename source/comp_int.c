/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:41:20 by adantas-          #+#    #+#             */
/*   Updated: 2024/05/09 23:49:11 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

int	le_int(int64_t a, int64_t b)
{
	return (a <= b);
}

int	lt_int(int64_t a, int64_t b)
{
	return (a < b);
}

int	eq_int(int64_t a, int64_t b)
{
	return (a == b);
}

int	gt_int(int64_t a, int64_t b)
{
	return (a > b);
}

int	ge_int(int64_t a, int64_t b)
{
	return (a >= b);
}

int	df_int(int64_t a, int64_t b)
{
	return (a != b);
}
