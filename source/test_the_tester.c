/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:05:52 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/21 22:09:03 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

int	main(void)
{
	t_inst		instance;
	t_inst		instance2;
	const char	*str = "Hello World";

	instance = init_instance_default(NULL);
	quick_test_ptr(instance.info, strchr(str, '!'), NULL);
	init_instance_default(&instance2);
	quick_test_ptr(instance.info, strchr(str, ' '), NULL);
}
