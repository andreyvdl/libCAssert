/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libassert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:00:15 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/21 22:08:37 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

t_inst	init_instance_default(t_inst *self)
{
	static t_inst	dflt = {\
		{\
			{DEFAULT_T_TEXT, DEFAULT_T_COLOR}, \
			{DEFAULT_D_TEXT, DEFAULT_D_COLOR}, \
			{DEFAULT_O_TEXT, DEFAULT_O_COLOR}, \
			{DEFAULT_K_TEXT, DEFAULT_K_COLOR} \
		}, \
		EQUAL \
	};

	if (self == NULL)
		return (dflt);
	*self = dflt;
	return (*self);
}
