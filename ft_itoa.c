/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:06:44 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/28 14:39:49 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_nbr(long int nbr)
{
	long int	res;

	res = 0;
	while (nbr > 9)
	{
		nbr /= 10;
		res++;
	}
	res++;
	return (res);
}

static	char	*copie_chaine(char *tab, int signe, int len, long int nbr)
{
	tab[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (signe == -1 && len == 0)
		{
			tab[len] = '-';
			return (tab);
		}
		tab[len] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	int			signe;
	int			len;
	char		*res;
	long int	nbr;

	signe = 1;
	len = 0;
	nbr = n;
	if (n < 0)
	{
		signe = -1;
		nbr *= -1;
		len++;
	}
	len = len + len_nbr(nbr);
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	return (copie_chaine(res, signe, len, nbr));
}
