/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:20:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 14:59:01 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	if (!(tab) || !(f))
		return (0);
	while (*tab && !((f)(*tab)))
		tab++;
	if (*tab)
		return (1);
	return (0);
}
