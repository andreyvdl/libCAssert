/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group_assert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:02:19 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/22 00:13:39 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

void	tests_ptr(t_inst *inst, void **result, void **expect, size_t n)
{
	size_t	i;
	size_t	errors;

	print_title_n_desc(inst->info.title_info, inst->info.description_info);
	printf("==========================================\n");
	i = -1;
	errors = 0;
	while (++i != n)
	{
		printf("%p == %p -> ", result[i], expect[i]);
		if (result[i] == expect[i])
			print_ok(inst[i].info.ok_info);
		else
		{
			print_ko(inst[i].info.ko_info);
			++errors;
		}
	}
	printf("==========================================\n");
	print_end_group(n, errors);
}

void	test_int(t_inst *inst, int64_t *results, int64_t *expects, size_t n)
{
	static int	(*map[])() = {&le_int, &lt_int, &eq_int, &gt_int, &ge_int};
	const char	*comp[5] = {"<=", "<", "==", ">", ">="};
	size_t		i;
	size_t		errors;

	print_title_n_desc(inst->info.title_info, inst->info.description_info);
	printf("==========================================\n");
	i = -1;
	errors = 0;
	while (++i != n)
	{
		printf("%ld %s %ld -> ", results[i], comp[inst->comp_type], expects[i]);
		if (map[inst->comp_type](results[i], expects[i]))
			print_ok(inst->info.ok_info);
		else
		{
			print_ko(inst->info.ko_info);
			++errors;
		}
	}
	printf("==========================================\n");
	print_end_group(n, errors);
}

void	test_double(t_inst *inst, double *results, double *expects, size_t n)
{
	static int	(*map[])() = {&le_double, &lt_double, &eq_double, &gt_double, \
		&ge_double};
	const char	*comp[5] = {"<=", "<", "==", ">", ">="};
	size_t		i;
	size_t		errors;

	print_title_n_desc(inst->info.title_info, inst->info.description_info);
	printf("==========================================\n");
	i = -1;
	errors = 0;
	while (++i != n)
	{
		printf("%lf %s %lf -> ", results[i], comp[inst[i].comp_type], expects[i]);
		if (map[inst[i].comp_type](results[i], expects[i]))
			print_ok(inst[i].info.ok_info);
		else
		{
			print_ko(inst[i].info.ko_info);
			++errors;
		}
	}
	printf("==========================================\n");
	print_end_group(n, errors);
}

