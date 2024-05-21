/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   behaviour_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:33:08 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/18 13:54:33 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	*p;
	int	chars_written;

	p = NULL;
	*p = 45;
	chars_written = printf("%c\n", 'Y');
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("280 %c\n", 280);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%c\n", 'a');
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("%s\n", "a");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("aalles gut: %s\n", "aalles gut");
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("p pointer: %p\n", p);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("d, 45: %d\n", *p);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("d, 10: %d\n", 10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("d, -10: %d\n", -10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("d, INT_MIN: %d\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("i, 45: %i\n", *p);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("i, 10: %i\n", 10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("i, -10: %i\n", -10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("i, INT_MIN: %i\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("u, 45: %u\n", *p);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("u, 10: %u\n", 10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("u, -10: %u\n", -10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("u, INT_MIN: %u\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("u, INT_MAX: %u\n", INT_MAX);
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("x, 45: %x\n", *p);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("x, 10: %x\n", 10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("x, -10: %x\n", -10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("x, INT_MIN: %x\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("x, INT_MAX: %x\n", INT_MAX);
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("X, 45: %X\n", *p);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("X, 10: %X\n", 10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("X, -10: %X\n", -10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("X, INT_MIN: %X\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("X, INT_MAX: %X\n", INT_MAX);

	printf("%%%d", 45); //%%d data format not used, doesnt recognize d
	printf("chars_written= %i\n", chars_written);
	return (0);
}
