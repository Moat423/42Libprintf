/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_behaviour_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:47:55 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/22 12:07:18 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	char	*p;
	int		chars_written;
//	char	letter;
	void	*ptr;
	int		*p2;
	int		value;

	p = "45";
	value = 1;
	ptr = NULL;
	p2 = &value;
	chars_written = ft_printf("%c\n", 'Y');
	ft_printf("chars_written= %i\n", chars_written);
	chars_written = ft_printf("280 %c\n", 280);
	ft_printf("chars_written= %i\n", chars_written);
	chars_written = ft_printf("%c\n", 'a');
	ft_printf("chars_written= %i\n", chars_written);

	chars_written = ft_printf("%s\n", "a");
	ft_printf("chars_written= %i\n", chars_written);
	chars_written = ft_printf("%s\n", "aalles gut");
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%p\n");
	ft_printf("p: ");
	chars_written = ft_printf("%p\n", p);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("&p: ");
	chars_written = ft_printf("%p\n", &p);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("ptr: ");
	chars_written = ft_printf("%p\n", ptr);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("p2: ");
	chars_written = ft_printf("%p\n", p2);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("&value: ");
	chars_written = ft_printf("%p\n", &value);
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%d\n");
	ft_printf("chars_written= %i\n", chars_written);
	chars_written = ft_printf("d, 45: %d\n", *p);
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%i\n");
	chars_written = ft_printf("10: %d\n", 10);
	ft_printf("chars_written= %i\n", chars_written);
	chars_written = ft_printf("-10: %d\n", -10);
	ft_printf("chars_written= %i\n", chars_written);
	chars_written = ft_printf("%d\n", INT_MIN);
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%u\n");
	ft_printf("45: ");
	chars_written = ft_printf("%u\n", *p);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("10: ");
	chars_written = ft_printf("%u\n", 10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("-10: ");
	chars_written = ft_printf("%u\n", -10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("INT_MIN: ");
	chars_written = ft_printf("%u\n", INT_MIN);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("INT_MAX: ");
	chars_written = ft_printf("%u\n", INT_MAX);
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%x\n");
	ft_printf("45: ");
	chars_written = ft_printf("%x\n", *p);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("10: ");
	chars_written = ft_printf("%x\n", 10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("-10: ");
	chars_written = ft_printf("%x\n", -10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("-10 as unsigned: ");
	chars_written = ft_printf("%x\n", (unsigned int)-10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("INT_MIN: ");
	chars_written = ft_printf("%x\n", INT_MIN);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("INT_MAX: ");
	chars_written = ft_printf("%x\n", INT_MAX);
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%x\n");
	ft_printf("45: ");
	chars_written = ft_printf("%X\n", *p);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("10: ");
	chars_written = ft_printf("%X\n", 10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("-10: ");
	chars_written = ft_printf("%X\n", -10);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("INT_MIN: ");
	chars_written = ft_printf("%X\n", INT_MIN);
	ft_printf("chars_written= %i\n", chars_written);
	ft_printf("INT_MAX: ");
	chars_written = ft_printf("%X\n", INT_MAX);
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf("%%%d", 45); //%%d data format not used, doesnt recognize d
	ft_printf("chars_written= %i\n", chars_written);

	ft_printf(" t after percent %t"); //%%d data format not used, doesnt recognize d
	//ft_printf("%s %d %s %c %d", "hello", 34, 'c', 'c', 23, 23, "end");
	return (0);
}
