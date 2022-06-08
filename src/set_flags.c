/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jatan <jatan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 02:51:05 by jatan             #+#    #+#             */
/*   Updated: 2022/06/09 03:35:42 by jatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag	*set_flags(char *flag_set, char *found, va_list args)
{
	int		index;
	t_flag	*flag;

	flag = ft_calloc(6, sizeof(t_flag));
	while (find_char(flag_set, found) != NULL)
	{
		index = flag_set - find_char(flag_set, found);
		flag[index] += 1;
		found++;
		if (find_char(found, SPECS) != NULL)
			return (flag);
	}
	return (NULL);
}


static char	*find_char(char *s, char *char_set)
{
	char	*ret;

	while (*char_set != 0)
	{
		ret = ft_strchr(s, *char_set);
		if (ret != NULL)
			return (ret);
		char_set++;
	}
	return (NULL);
}
