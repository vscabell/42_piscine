/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:29:24 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 20:21:02 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void		ft_putstr(char *s)
{
	int i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
