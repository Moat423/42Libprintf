# 42Libprintf
the 42 project for rewriting a simple printf function in C with the following requirements:
Don’t implement the buffer management of the original printf().

• the function has to handle the following conversions: cspdiuxX%

• the function has the same output as the original printf().

• the command ar must me used to create your library.
Using the libtool command is forbidden.

• the libftprintf.a has to be created at the root of your repository

conversions:

• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.

Bonus list: (not yet impelemted!!)

• Manage any combination of the following flags: ’-0.’ and the field minimum width
under all conversions.

• Manage all the following flags: ’# +’ (Yes, one of them is a space)
