/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group_assert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:02:19 by adantas-          #+#    #+#             */
/*   Updated: 2024/05/09 23:59:39 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libassert.h"

void	test_ptr(t_inst *inst, void **res, void **exp, size_t n)
{
	static int	(*map[])() = {&le_void, &lt_void, &eq_void, &gt_void, \
		&ge_void, &df_void};
	const char	*comp[6] = {"<=", "<", "==", ">", ">=", "!="};
	size_t	i;
	size_t	errors;

	print_title_n_desc(inst->title, inst->desc);
	printf("==========================================\n");
	i = -1;
	errors = 0;
	while (++i != n)
	{
		printf("%p %s %p -> ", res[i], comp[inst[i].comp_type], exp[i]);
		if (map[inst[i].comp_type](res[i], exp[i]))
			print_ok(inst[i].ok);
		else
		{
			print_ko(inst[i].ko);
			++errors;
		}
	}
	printf("==========================================\n");
	print_end_group(n, errors);
}

void	test_int(t_inst *inst, int64_t *res, int64_t *exp, size_t n)
{
	static int	(*map[])() = {&le_int, &lt_int, &eq_int, &gt_int, &ge_int, \
		&df_int};
	const char	*comp[6] = {"<=", "<", "==", ">", ">=", "!="};
	size_t		i;
	size_t		errors;

	print_title_n_desc(inst->title, inst->desc);
	printf("==========================================\n");
	i = -1;
	errors = 0;
	while (++i != n)
	{
		printf("%ld %s %ld -> ", res[i], comp[inst[i].comp_type], exp[i]);
		if (map[inst[i].comp_type](res[i], exp[i]))
			print_ok(inst[i].ok);
		else
		{
			print_ko(inst[i].ko);
			++errors;
		}
	}
	printf("==========================================\n");
	print_end_group(n, errors);
}

void	test_double(t_inst *inst, double *res, double *exp, size_t n)
{
	static int	(*map[])() = {&le_double, &lt_double, &eq_double, &gt_double, \
		&ge_double, &df_double};
	const char	*comp[6] = {"<=", "<", "==", ">", ">=", "!="};
	size_t		i;
	size_t		errors;

	print_title_n_desc(inst->title, inst->desc);
	printf("==========================================\n");
	i = -1;
	errors = 0;
	while (++i != n)
	{
		printf("%lf %s %lf -> ", res[i], comp[inst[i].comp_type], exp[i]);
		if (map[inst[i].comp_type](res[i], exp[i]))
			print_ok(inst[i].ok);
		else
		{
			print_ko(inst[i].ko);
			++errors;
		}
	}
	printf("==========================================\n");
	print_end_group(n, errors);
}
