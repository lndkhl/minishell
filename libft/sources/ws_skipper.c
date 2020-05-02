/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitespace_skipper.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkambul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:36:39 by lnkambul          #+#    #+#             */
/*   Updated: 2019/06/22 17:19:57 by lnkambul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ws_skipper(char *p)
{
	while (*p == 32 || *p == '\t' || *p == '\n'\
			|| *p == '\r' || *p == '\f' || *p == '\v')
		p++;
	return (p);
}
