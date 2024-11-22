/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 07:18:01 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/22 15:13:01 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printptr(unsigned long ptr, size_t *count)
{
	ft_putstr("0x", count);
	ft_printhex("0123456789abcdef", 16, ptr, count);
}
