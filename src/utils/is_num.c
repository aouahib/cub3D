/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouahib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:34:27 by aouahib           #+#    #+#             */
/*   Updated: 2019/12/08 14:36:17 by aouahib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	is_num(char *s)
{
	if (!s)
		return (0);
	while (ft_isdigit(*s))
		s++;
	return (!*s);
}
