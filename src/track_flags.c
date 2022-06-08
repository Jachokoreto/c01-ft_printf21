/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   track_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jatan <jatan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:51:05 by jatan             #+#    #+#             */
/*   Updated: 2022/06/09 03:09:44 by jatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	track_flags(t_flag *flag, char *flag_set, char found)
{
	int	index;

	index = flag_set - ft_strchr(flag_set, found);
	flag[index] += 1;
}
