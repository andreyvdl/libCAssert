/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_assert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:25:00 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/22 00:19:21 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

void	quick_test_ptr(t_info q_info, void *result, void *expect)
{
	print_title_n_desc(q_info.title_info, q_info.description_info);
	printf("%p == %p -> ", result, expect);
	if (result == expect)
		print_ok(q_info.ok_info);
	else
		print_ko(q_info.ko_info);
	printf("\n");
}

void	quick_test_int(t_info q_info, \
					t_comp const cmp, \
					int64_t result, \
					int64_t expect)
{
	static int	(*map[])() = {&le_int, &lt_int, &eq_int, &gt_int, &ge_int};
	const char	*comparing[5] = {"<=", "<", "==", ">", ">="};

	print_title_n_desc(q_info.title_info, q_info.description_info);
	printf("%ld %s %ld -> ", result, comparing[cmp], expect);
	if (map[cmp](result, expect))
		print_ok(q_info.ok_info);
	else
		print_ko(q_info.ko_info);
	printf("\n");
}

void	quick_test_double(t_info q_info, \
						t_comp const cmp, \
						double result, \
						double expect)
{
	static int	(*map[])() = {&le_double, &lt_double, &eq_double, &gt_double, \
		&ge_double};
	const char	*comparing[5] = {"<=", "<", "==", ">", ">="};

	print_title_n_desc(q_info.title_info, q_info.description_info);
	printf("%lf %s %lf -> ", result, comparing[cmp], expect);
	if (map[cmp](result, expect))
		print_ok(q_info.ok_info);
	else
		print_ko(q_info.ko_info);
	printf("\n");
}
