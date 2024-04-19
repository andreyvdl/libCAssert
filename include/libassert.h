/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libassert.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:59:05 by adantas-          #+#    #+#             */
/*   Updated: 2024/04/19 18:02:43 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASSERT_H
# define LIBASSERT_H

# include <signal.h>

typedef struct s_instance		t_instance;
typedef struct s_title			t_title;
typedef struct s_description	t_description;
typedef struct s_ok				t_ok;
typedef struct s_ko				t_ko;
typedef void					*(*t_function)();

struct	s_title
{
	const char	*title;
	const char	*color;
};

struct	s_description
{
	const char	*description;
	const char	*color;
};

struct	s_ok
{
	const char	*ok;
	const char	*color;
};

struct	s_ko
{
	const char	*ko;
	const char	*color;
};

struct	s_instance
{
	t_title			title;
	t_description	description;
	t_ok			ok;
	t_ko			ko;
	t_function		function;
};

void	handle_sig_abort(int sig);
int		*get_counter(const int reset);

#endif
