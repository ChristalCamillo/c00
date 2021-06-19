#include<unistd.h>

void	ft_is_negative(int n)
{
	char	letra;

	if (n >= 0)
	{
		letra = 'P';
	}
	else
	{
		letra = 'N';
	}
	write(1, &letra, 1);
}
