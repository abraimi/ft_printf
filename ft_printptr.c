/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 07:18:01 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/20 07:36:25 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printptr(unsigned int ptr, size_t *count)
{
	ft_putstr("0x", count);
	ft_printhex("0123456789ABCDEF", (unsigned long long)ptr, count);
}