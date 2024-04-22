/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:44:11 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/21 17:48:53 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

void	print_title_n_description(t_title title, t_desc description)
{
	printf("%s%s\033[0m\n", title.color, title.text);
	printf("%s%s\033[0m\n", description.color, description.text);
}

void	print_ko(t_ko ko)
{
	printf("%s%s\033[0m\n", ko.color, ko.text);
}

void	print_ok(t_ok ok)
{
	printf("%s%s\033[0m\n", ok.color, ok.text);
}
