/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libassert.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:59:05 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/21 22:14:32 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASSERT_H
# define LIBASSERT_H
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>
# define COLOR_BLACK "\033[30m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_CYAN "\033[36m"
# define COLOR_WHITE "\033[37m"
# define COLOR_NO "\033[0m"
# define DEFAULT_T_COLOR COLOR_NO
# define DEFAULT_T_TEXT "Test"
# define DEFAULT_D_COLOR COLOR_NO
# define DEFAULT_D_TEXT "No description provided"
# define DEFAULT_O_COLOR COLOR_GREEN
# define DEFAULT_O_TEXT "OK"
# define DEFAULT_K_COLOR COLOR_RED
# define DEFAULT_K_TEXT "KO"

typedef enum e_comp
{
	LESS_EQUAL = 0,
	LESS,
	EQUAL,
	GREATER,
	GREATER_EQUAL,
}	t_comp;

typedef struct s_title
{
	const char	*text;
	const char	*color;
}	t_title;

typedef struct s_desc
{
	const char	*text;
	const char	*color;
}	t_desc;

typedef struct s_ok
{
	const char	*text;
	const char	*color;
}	t_ok;

typedef struct s_ko
{
	const char	*text;
	const char	*color;
}	t_ko;

typedef struct s_info
{
	t_title	title_info;
	t_desc	description_info;
	t_ok	ok_info;
	t_ko	ko_info;
}	t_info;

typedef struct s_inst
{
	t_info	info;
	t_comp	comp_type;
}	t_inst;

void	handle_sig_abort(int sig);
int		*get_ko_count(const int reset);
int		le_int(int64_t a, int64_t b);
int		lt_int(int64_t a, int64_t b);
int		eq_int(int64_t a, int64_t b);
int		gt_int(int64_t a, int64_t b);
int		ge_int(int64_t a, int64_t b);
int		le_double(double a, double b);
int		lt_double(double a, double b);
int		eq_double(double a, double b);
int		gt_double(double a, double b);
int		ge_double(double a, double b);
void	print_title_n_description(t_title title, t_desc description);
void	print_ko(t_ko ko);
void	print_ok(t_ok ok);
void	quick_test_ptr(t_info q_info, void *result, void *expect);
void	quick_test_double(t_info q_info, \
					t_comp const cmp, \
					double result, \
					double expect);
void	quick_test_int(t_info q_info, \
					t_comp const cmp, \
					int64_t result, \
					int64_t expect);
t_inst	init_instance_default(t_inst *self);

#endif
