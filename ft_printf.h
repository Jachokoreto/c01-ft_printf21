/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jatan <jatan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:51:56 by jatan             #+#    #+#             */
/*   Updated: 2022/06/09 03:34:20 by jatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define FLAGS "-0.# +"
# define SPECS "cspdiuxX%"

typedef int	t_flag;

int		ft_printf(const char *format, ...);
t_flag	*set_flags(char *flag_set, char *str, va_list args);
void	handle_flags(t_flag *flag, char *str, char spec);

#endif
