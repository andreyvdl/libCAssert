/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libassert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:00:15 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/19 17:12:00 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

int	*get_counter(const int reset)
{
	static int	counter = 0;

	if (reset)
		counter = 0;
	return (&counter);
}

void	handle_sig_abort(int sig)
{
	++(*get_counter(0));
}

void	quick_test(const char *test_title, t_instance *instance)
{

}
