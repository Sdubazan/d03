/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:10:49 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/21 10:14:09 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int *a, int *b, int *div, int *mod)
{
	*div = a / b;
	*mod= a % b;
}
