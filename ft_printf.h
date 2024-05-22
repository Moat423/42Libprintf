/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:02:32 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/21 17:24:57 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_putptr_fd(unsigned int nb, int fd);
int	ft_puthex_fd(unsigned int nb, int fd, int count);
int	ft_puthex_lower_fd(unsigned int nb, int fd, int *count);
int	ft_puthex_upper_fd(unsigned int nb, int fd, int *count);
#endif
