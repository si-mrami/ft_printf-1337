/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrami <mrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:15:36 by mrami             #+#    #+#             */
/*   Updated: 2022/11/21 00:09:48 by mrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nu);
int	ft_putpntr(unsigned long long ptr);
int	ft_puthdmlup(unsigned int hdml);
int	ft_puthdmllow(unsigned int hdml);
int	ft_putdcml(unsigned int num);

#endif