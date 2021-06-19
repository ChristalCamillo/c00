#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnumber(int number)
{
	int	dec;
	int	uni;

	dec = (number / 10 ) + 48 ;
	uni = (number % 10 ) + 48 ;
	write(1, &dec, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int	comb1;
	int	comb2;

	comb1 = 0;
	while (comb1 <= 98)
	{
		comb2 = comb1 + 1 ;
		while (comb2 <= 99)
		{
			ft_printnumber(comb1);
			ft_putchar(' ');
			ft_printnumber(comb2);
			if (comb1 < 98 || comb2 < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			comb2++;
		}
		comb1++;
	}
}
