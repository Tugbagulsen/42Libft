/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuggulse <tuggulse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:23:30 by tuggulse          #+#    #+#             */
/*   Updated: 2022/10/08 15:43:48 by tuggulse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(char n)
{
	if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')
		|| (n >= '0' && n <= '9'))
		return (1);
	return (0);
}
