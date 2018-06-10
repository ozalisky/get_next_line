/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_lngth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozalisky <ozalisky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:11:17 by ozalisky          #+#    #+#             */
/*   Updated: 2017/11/16 14:05:41 by ozalisky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbr_lngth(int n)
{
	if (n >= 0 && n <= 9)
		return (1);
	if (n > -10 && n < 0)
	{
		return (2);
	}
	if (n < 0)
	{
		if (n == -2147483648)
			n = -2147483647;
		n = -n;
		return (2 + ft_nbr_lngth(n / 10));
	}
	if (n / 10 != 0)
		return (1 + ft_nbr_lngth(n / 10));
	return (0);
}
