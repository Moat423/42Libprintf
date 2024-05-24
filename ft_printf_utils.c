/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:11:43 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/22 11:55:43 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"

int	ft_puthex_fd(unsigned long nb, int fd, int *count, char *base)
{
	if (nb >= 16)
		ft_puthex_fd(nb / 16, fd, count, base);
	write (fd, &base[nb % 16], 1);
	return (*count += 1);
}

int	ft_puthex_upper_fd(unsigned int nb, int fd, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	ft_puthex_fd(nb, fd, count, base);
	return (*count);
}

int	ft_puthex_lower_fd(unsigned long nb, int fd, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	ft_puthex_fd(nb, fd, count, base);
	return (*count);
}

int	ft_putptr_fd(void *nb, int fd)
{
	int	count;

	count = 0;
	if (!nb)
		return (write(fd, "(nil)", 5));
	count = write(fd, "0x", 2);
	ft_puthex_lower_fd((unsigned long)nb, fd, &count);
	return (count);
}
