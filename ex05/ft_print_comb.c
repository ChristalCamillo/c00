#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (a++ < '7')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				if (!(a == '0' && b == '1' && c == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
		}
	}
}
